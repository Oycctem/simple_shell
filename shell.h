#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <limits.h>

#define BUFFER_SIZE 1024
#define DELIM "\n \t"
extern char **environ;

char **strbrkdown(char *cmd, int *num_tokens);
int handle_builtin_commands(char *cmd);
void free_mem(char **tokens, int *num_tokens);
int _strcmp(char *s1, char *s2);
int _strlen(const char *s);
char *_strcat(char *dest, const char *src);
char *_strcpy(char *dest, const char *src);
int _strncmp(const char *s1, const char *s2, size_t i);
int executer(char **cmd, char *name, int *num_tokens, char *buffer);
int token_counter(const char *cmd);
char *matching_path(const char *cmd);
char *getpath();
int command_path_check(const char *cmd);
char *_strdup(const char *s);
char *_strchr(const char *s, int i);
char *make_whole_path(const char *path, const char *cmd);
#endif
