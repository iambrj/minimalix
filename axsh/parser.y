goal: 
	cmd_list;
arg_list:
	arg_list WORD { (*cur_s_cmd).add_arg($2);}
	| /* empty */
	;
cmd_and_args:
	WORD arg_list
	;
pipe_list:
	pipe_list PIPE cmd_and_args
	| cmd_and_args
	;
io_modifier:
	GREATGREAT Word
	| GREAT Word
	| GREATGREATAMPERSAND Word
	| GREATAMPERSAND Word
	| LESS Word
	;
io_modifier_list:
	io_modifier_list io_modifier
	| /* empty */
	;
background_optional:
	AMPERSAND
	| /* empty */
	;
cmd_line:
	pipe_list io_modifier_list background_optional NEWLINE
	| NEWLINE /* empty line */
	| error NEWLINE{yyerrok;}
			/* error recovery */
cmd_list:
	cmd_list cmd_line
	; /* command loop */
