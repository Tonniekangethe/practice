#ifndef _SIMPLESHELL_H_
#define _SIMPLESHELL_H_

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stddef.h>

char *find_execuitable(const char *command);
int _execve(const char *path, char *const argv[], char *const envp[]);
void execuite_command(const char *full_path, char *const argv[]);
char *_strdup(char *str);

#endif
