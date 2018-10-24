#include "decl.h"
char *xsh_readline(void)
{
  int bufsize = LINE_SIZE;
  int position = 0;
  char *buffer = (char *)malloc(sizeof(char) * bufsize);
  int c;

  if (!buffer) {
    fprintf(stderr, "xsh: allocation error\n");
    exit(EXIT_FAILURE);
  }

  while (1) {
    c = getchar();

    if (c == EOF) {
      exit(EXIT_SUCCESS);
    } else if (c == '\n') {
      buffer[position] = '\0';
      return buffer;
    } else {
      buffer[position] = c;
    }
    position++;

    if (position >= bufsize) {
      bufsize += LINE_SIZE;
      buffer = (char *)realloc(buffer, bufsize);
      if (!buffer) {
        fprintf(stderr, "xsh: allocation error\n");
        exit(EXIT_FAILURE);
      }
    }
  }
}
