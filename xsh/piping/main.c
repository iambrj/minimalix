int
main ()
{
  const char *ls[] = { "ls", "-l", 0 };
  const char *awk[] = { "awk", "{print $1}", 0 };
  const char *sort[] = { "sort", 0 };
  const char *uniq[] = { "uniq", 0 };

  struct command cmd [] = { {ls}, {awk}, {sort}, {uniq} };

  return fork_pipes (4, cmd);
}
