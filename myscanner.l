%{
#include "myscanner.h"
%}

%%
"//"[^\n]*    					; 
[ \t\n]							;
"{"           					{print("open bracket"); return '{';} 
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

int main()
{
	int scan;
	int yyin = fopen("myscanner.c", "r");
	printf("\n\n");
	scan = yylex();
	while(scan){
		printf("Token: %s\t\t ", yytext);
		if(scan == 1){
			printf("IDENTIFIER");
		}
		else if(scan == 2){
			printf("INTEGER");
		}
		else if(scan == 3){
			printf("DATATYPE");
		}
		else if(scan == 4){
			printf("INCLUDE");
		}
		else if(scan == 5){
			printf("RETURN");
		}
		else if(scan == 6){
			printf("HEADER_NAME");
		}
		else {
			printf("ERROR");
		}
		printf("\n");
		scan = yylex();
	}
}