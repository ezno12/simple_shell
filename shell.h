#ifndef SHELL_H_
#define SHELL_H_
/* ... */
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <string.h>
#include <stdlib.h>
#include <signal.h>
#include <errno.h>
/* ... */
#define BUFFER_SIZE 1024
#define TOKEN_SIZE 64
/* ... */
extern char **environ;
char *path(char *command);
int _execve(char **argv, char *path);
int readline(char *buffer);
int interactive(void);
int noninteractive(char *av[]);
char **token(char *buffer, const char *delim);
char *_strtok(char *str, char *deli);
char *_strchr(char *string, char b);
int _strcmp(char *s1, char *s2);
int _stlren(char *string);
unsigned int _strcspn(char *s, char *accept);
char *_strdup(char *str);
char *create_array(unsigned int size, char c);
char *_getenv(const char *name, char **env);
/* ...*/
#endif