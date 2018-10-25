#ifndef _BUILTINS_H_
#define _BUILTINS_H_
int xsh_cd(char **args);
int xsh_help(char **args);
int xsh_exit(char **args);
int xsh_echo(char **args);
int xsh_num_builtins();
int xsh_history();
char **hist; // array to store history
int hist_idx; // history index
#endif
