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
int xsh_history() {
	for(int i = 0; i < hist_idx; i++) {
		printf("%d: %s\n", i, hist[i]);
	}
}
int xsh_echo(char **args) {
	for(int i = 1; args[i] != NULL; i++) {
		fprintf(stdout, "%s ", args[i]);
	}
	fprintf(stdout, "\n");
	return 1;
}
