#include "decl.h"
#include "builtins.h"
int xsh_update_hist(char *line) {
	if(line[0] == '\0') return 1;
	if(hist_idx < HIST_SIZE) {
		hist[hist_idx] = (char *) malloc(sizeof(char) * (strlen(line) + 1));
		strcpy(hist[hist_idx], line);
		hist_idx++;
	} else {
		for(int i = 0; i < HIST_SIZE - 1; i++) {
			free(hist[i]);
			hist[i] = (char *) malloc(strlen(hist[i + 1]) + 1);
			strcpy(hist[i], hist[i + 1]);
		}
		hist[HIST_SIZE - 1] = (char *) malloc(sizeof(char) * (strlen(line) + 1));
	}
}
