#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int xsh_cd(char **args);
int xsh_help(char **args);
int xsh_exit(char **args);
char *builtin_str[] = {
  "cd",
  "help",
  "exit"
};

int (*builtin_func[]) (char **) = {
  &xsh_cd,
  &xsh_help,
  &xsh_exit
};

int xsh_num_builtins() {
  return sizeof(builtin_str) / sizeof(char *);
}
