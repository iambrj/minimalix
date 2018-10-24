#include "builtins.h"
#include "decl.h"
int xsh_cd(char **args)
{
  if (args[1] == NULL) {
    fprintf(stderr, "xsh: expected argument to \"cd\"\n");
  } else {
    if (chdir(args[1]) != 0) {
      perror("xsh");
    }
  }
  return 1;
}
