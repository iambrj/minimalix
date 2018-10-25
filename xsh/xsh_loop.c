#include "decl.h"
void xsh_loop(void)
{
	char *line;
	char **args;
	int status;

	do {
		printf(">>> ");
		line = xsh_readline();
		args = xsh_parse(line);
		status = xsh_execute(args);
		xsh_update_hist(line);
		free(line);
		free(args);
	} while (status);
}
