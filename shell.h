#ifndef _SHELL_H
#define _SHELL_H

/* librerias */
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <signal.h>
#include <stdarg.h>

/*Global variable */
extern char **environ;

/* Macros */
#define PROMPT "$ "
#define WHITESPACE " \n\r\t"

/* Prototypes */
int interactive(char **env);
char **parse_input(char *buf);
bool execute_cmd(char **commands, char *line, char **env);
char *get_env_path(char **env, char *compare);
bool exec_routes(char **commands, char *line, char **env);
char **get_route(char **commands, char **env);
int noninteractive(char **env);





/* Builtins functions system calls */
void signalhandle(int n __attribute__((unused)));
void ctrl_c(char *line);
void fork_error(char *line, char **commands);
void free_arrays(char **array);
void print_environment(void);
void exit_shell(char *line, char **cmd);
void excutefalse(char *line, char **commands);




/* String Functions */
int _strlen(char *str);
int _strcmp(char *s1, char *s2);
char *_strncat(char *dest, char *src, int n);
char *_strcpy(char *dest, char *src);
char *_strncpy(char *dest, char *src, int n);



#endif