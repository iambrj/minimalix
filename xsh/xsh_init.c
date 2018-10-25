#include "builtins.h"
#include "decl.h"
#include <stdlib.h>
int xsh_init()
{
	hist_idx = 0;
	hist = (char **) malloc(sizeof(char*) * HIST_SIZE);
}
