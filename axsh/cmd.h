#ifndef _CMD_H_
#define _CMD_H_
#include "s_cmd.h"
typedef struct
{
	int cur_s_cmd; // current space allocated for simple commands
	int s_cmd; // number of actual simple commands
	s_cmd **s_cmds; // NULL terminated array containing strings of simple commands
	char *o_f; // output file descriptor
	char *i_f; // input file descriptor
	char *e_f; // error file descriptor
	int b; // run in background?
	void prompt();
	void print();
	void execute();
	void clear();
	cmd();
	void add_s_cmd(s_cmd *new_s_cmd);
	static cmd cur_cmd;
	static sc *cur_s_cmd;
} cmd;
#endif
