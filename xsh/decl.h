#ifndef _DECL_H_
#define _DECL_H_


/*
 * Includes used in various source files
 *
 * */
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


/*
 * Function declarations
 *
 * */


int xsh_launch(char **args);
void xsh_loop(void);
char **xsh_parse(char* line);
char *xsh_readline(void);
int xsh_execute(char **args);
int xsh_update_hist(char *line);
int xsh_init();


/*
 * Defines for some constants
 *
 * */


#define TOKEN_SIZE 1024
#define TOKEN_DELIM " \t\n\v\f\r\a"
#define LINE_SIZE 1024
#define HIST_SIZE 500


/*
 * Global variables
 *
 * */
#endif
