#ifndef _S_CMD_H_
#define _S_CMD_H_
typedef struct
{
	int cur_args; // current space allocated for args
	int tot_args; // number of acutal args
	char **args; // NULL terminated array containing strings of simple commands
	s_cmd(); 
	add_arg();
} s_cmd;
#endif
