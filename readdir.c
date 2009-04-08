#define WIN32_LEAN_AND_MEAN
#include <errno.h>
#include <stdlib.h>
#include <windows.h>	// FindFirstFile, FindNextFile
#include "readdir.h"

typedef struct dir_private
{
	HANDLE h;
	int first_read;
	struct dirent buf;
} DIR;

DIR *opendir(const char *name)
{
	DIR *ret = NULL;
	char name2[MAX_PATH];
	WIN32_FIND_DATAA findData;
	
	if (strlen(name) >= MAX_PATH - 2 - 1)
	{
		errno = ENAMETOOLONG;
		return ret;
	}
	strcpy(name2, name);
	strcat(name2, "/*");

	if (!(ret = (DIR *)malloc(sizeof(DIR))))
	{
		errno = ENOMEM;
		return ret;
	}

	ret->h = FindFirstFileA(name2, &findData);
	if (ret->h == INVALID_HANDLE_VALUE)
	{
		DWORD err = GetLastError();
		free(ret);
		ret = NULL;
		switch (err)
		{
		case ERROR_FILE_NOT_FOUND: errno = ENOENT; break;
		case ERROR_PATH_NOT_FOUND: errno = ENOENT; break;
		case ERROR_ACCESS_DENIED: errno = EACCES; break;
		case ERROR_DIRECTORY: errno = ENOTDIR; break;
		default: errno = EINVAL;
		}
		return ret;
	}

	strcpy(ret->buf.d_name, findData.cFileName);
	ret->first_read = 1;
	return ret;
}

struct dirent *readdir(DIR *dir)
{
	WIN32_FIND_DATAA findData;

	if (!dir)
	{
		errno = EBADF;
		return NULL;
	}

	if (dir->first_read)
	{
		dir->first_read = 0;
		return &dir->buf;
	}

	if (!FindNextFileA(dir->h, &findData))
	{
		switch (GetLastError())
		{
		case ERROR_NO_MORE_FILES: errno = ENOENT; break;
		case ERROR_INVALID_HANDLE: errno = EBADF; break;
		default: errno = EINVAL;
		}
		return NULL;
	}

	strcpy(dir->buf.d_name, findData.cFileName);
	return &dir->buf;
}

int closedir(DIR *dir)
{
	if (!dir)
	{
		errno = EBADF;
		return -1;
	}
	FindClose(dir->h);
	free(dir);
	return 0;
}

