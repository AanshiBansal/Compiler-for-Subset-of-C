%{
#include "myscanner.h"
%}

%%
"//"[^\n]*    					; 
\/\*(.|\n)*?\*\/				;
[ \t\n]							;

"{"           					return OPEN_BRACE;
"}"           					return CLOSE_BRACE;
"("           					return OPEN_BRACKET;
")"           					return CLOSE_BRACKET;
";"           					return SEMI_COLON;
[+-]?[1-9][0-9]*				return INT_CONST;
\"(\\.|[^"\\])*\"   			return STRING_CONST;
\'.\'							return CHAR_CONST;
[+-]?([0-9]*[.])?[0-9]+			return FLOAT_CONST;
"return"						return RETURN;
"int"							return INT_DTYPE;
"char"							return CHAR_DTYPE;
"float"							return FLOAT_DTYPE;
"void"							return VOID_DTYPE;
"#include"						return INCLUDE;
"if" 							return IF;
"else" 							return ELSE;
"for"							return FOR;
"while"							return WHILE;
"switch"						return SWITCH;
"case"							return CASE;
"break"							return BREAK;
"continue"						return CONTINUE;
"%d"|"%f"|"%u"|"%s" 			return TYPE_SPEC;
"<=" 							return LESSER_EQUAL;
">=" 							return GREATER_EQUAL;
"==" 							return EQEQ;
"!=" 							return NEQ;
"||" 							return LOR;
"&&" 							return LAND;
"="								return ASSIGNMENT;
"++" 							return INCR;
"--" 							return DECR;
"+"								return ADD;
"-" 							return SUB;
"*" 							return MUL;
"/" 							return DIV;
"%" 							return MOD;
"<" 							return LESSER;
">" 							return GREATER;
"," 							return COMMA;
"["								return OPEN_SQUARE;
"]"								return CLOSED_SQUARE;
"<"[a-z.]+">"  					return HEADER_NAME; 
[a-zA-Z][_a-zA-Z0-9]*			return IDENTIFIER;
"\"" 							return DOUBLEQUOTES;
.								printf("unexpected character\n");

%%

int yywrap()
{
	return 1;
}

int main()
{
	int scan;
	yyin = fopen("test5.c", "r");
	printf("\n\n");
	scan = yylex();
	while(scan){
		printf("Token: %s\t\t ", yytext);

		switch(scan){
			case 1: printf("IDENTIFIER"); break;
			case 2: printf("INT_CONST"); break;
			case 3: printf("INT_DTYPE"); break;
			case 4: printf("INCLUDE"); break;
			case 5: printf("RETURN"); break;
			case 6: printf("HEADER_NAME"); break;
			case 7: printf("OPEN_BRACE"); break;
			case 8: printf("CLOSE_BRACE"); break;
			case 9: printf("OPEN_BRACKET"); break;
			case 10: printf("CLOSE_BRACKET"); break;
			case 11: printf("SEMI_COLON"); break;
			case 12: printf("ASSIGNMENT"); break;
			case 13: printf("ADD"); break;
			case 14: printf("SUB"); break;
			case 15: printf("MUL"); break;
			case 16: printf("DIV"); break;
			case 17: printf("IF"); break;
			case 18: printf("ELSE"); break;
			case 19: printf("FOR"); break;
			case 20: printf("WHILE"); break;
			case 21: printf("CHAR_DTYPE"); break;
			case 22: printf("FLOAT_DTYPE"); break;
			case 23: printf("MOD"); break;
			case 24: printf("INCR"); break;
			case 25: printf("DECR"); break;
			case 26: printf("LESSER"); break;
			case 27: printf("GREATER"); break;
			case 28: printf("LESSER_EQUAL"); break;
			case 29: printf("GREATER_EQUAL"); break;
			case 30: printf("EQEQ"); break;
			case 31: printf("NEQ"); break;
			case 32: printf("LOR"); break;
			case 33: printf("LAND"); break;
			case 34: printf("COMMA"); break;
			case 35: printf("SWITCH"); break;
			case 36: printf("CASE"); break;
			case 37: printf("BREAK"); break;
			case 38: printf("CONTINUE"); break;
			case 39: printf("FLOAT_CONST"); break;
			case 40: printf("CHAR_CONST"); break;
			case 41: printf("VOID_DTYPE"); break;
			case 42: printf("STRING_CONST"); break;
			case 43: printf("OPEN_SQUARE"); break;
			case 44: printf("CLOSED_SQUARE"); break;
			case 45: printf("TYPE_SPEC"); break;
			case 46: printf("DOUBLEQUOTES"); break;

			default: printf("unexpected");

		}


		
		printf("\n");
		scan = yylex();
	}
}