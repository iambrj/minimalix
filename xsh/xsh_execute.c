#include "decl.h"
#include "builtins.h"
int xsh_execute(char **args) {
	int i;

	if (args[0] == NULL) {
		return 1;
	}
	//TODO: add array of function pointers to manage builtins
	if(strcmp(args[0], "history") == 0) {
		xsh_history();
		return 1;
	} else if(strcmp(args[0], "cd") == 0) {
		xsh_cd(args);
		return 1;
	} else if(strcmp(args[0], "echo") == 0) {
		xsh_echo(args);
		return 1;
	}
	return xsh_launch(args);
}
