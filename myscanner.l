%{
#include "myscanner.h"
%}

%%
"//"[^\n]*    					; 
[ \t\n]							;
"{"           					return '{'; 
"}"           					return '}'; 
"("           					return '('; 
")"           					return ')'; 
";"           					return ';'; 
[1-9][0-9]*						return INTEGER;

"return"						return RETURN;
"int"							return DATATYPE;
"#include"						return INCLUDE;
"<"[a-z.]+">"  					return HEADER_NAME; 
[a-zA-Z][_a-zA-Z0-9]*			return IDENTIFIER;

.								printf("unexpected character\n");

%%

int yywrap()
{
	return 1;
}