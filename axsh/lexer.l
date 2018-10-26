%{

#include <string.h>
#include "y.tab.h"

%}

%%

\n 
{
	return NEWLINE;
}

[ \t]+
{
	// ignore whitespace
}

">"
{
	return GREAT;
}

"<"
{
	return LESS;
}

">>"
{
	return GREATGREAT;
}

">>&"
{
	return GREATGREATAMPERSAND;
}

">&"
{
	return GREATAMPERSAND;
}

"|"
{
	return PIPE;
}

"&"
{
	return AMPERSAND;
}

[^ \t\n][^ \t\n]*
{
	yylval.string_val = strdup(yytext);
	return WORD;
}

.
{
	return NOTOKEN;
}

%%

