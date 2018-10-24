#include "builtins.h"
int xsh_echo(char **args) {
	for(int i = 0; i < sizeof(args) / sizeof(args[0]); i++) {
		fprintf(stdout, "%s", args[i]);
	}
	return 1;
}
