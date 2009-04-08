#ifndef STAT_H_INCLUDED
#define STAT_H_INCLUDED

#include <sys/types.h>
#include <sys/stat.h>

#ifdef _WIN32
#define S_ISDIR(m)       (((m) & S_IFMT) == S_IFDIR)
#define stat _stat
#else
#include <unistd.h>
#endif

#endif /* STAT_H_INCLUDED */
