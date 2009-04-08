#ifndef READDIR_H_INCLUDED
#define READDIR_H_INCLUDED

#include <sys/types.h>

#ifdef _WIN32

#ifndef MAX_PATH
#define MAX_PATH 260
#endif

struct dirent
{
	char d_name[MAX_PATH];
};

typedef struct dir_private DIR;

DIR *opendir(const char *name);
struct dirent *readdir(DIR *dir);
int closedir(DIR *dir);

#else
#include <dirent.h>
#endif

#endif /* READDIR_H_INCLUDED */
