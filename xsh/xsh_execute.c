#include "decl.h"
#include "builtins.h"
int xsh_execute(char **args) {
  int i;

  if (args[0] == NULL) {
    return 1;
  }
  return xsh_launch(args);
}
