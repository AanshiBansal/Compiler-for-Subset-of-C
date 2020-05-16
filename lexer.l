
D			[0-9]			
L			[a-zA-Z_]
H			[a-fA-F0-9]
E			[Ee][+-]?{D}+
FS			(f|F|l|L)
IS			(u|U|l|L)*
space 		[ ]

%{
#include <stdio.h>
#include <string.h> 
void insertConstTable(char *val, int lineNo, char *dtype);
void insertSymbolTable(char *token, char *dtype, int line);
char datatype[50] = "nothing";

%}

%%
\n				{yylineno++;}
"/*"			{ multicomment(); }
"//"					{ singlecomment(); }

"auto"			{ return(AUTO); } //No code for define, include
"break"			{ return(BREAK); }
"case"			{ return(CASE); }
"char"			{ return(CHAR); }
"const"			{ return(CONST); }
"continue"		{ return(CONTINUE); }
"default"		{ return(DEFAULT); }
"do"			{ return(DO); }
"double"		{ return(DOUBLE); }
"else"			{ return(ELSE); }
"enum"			{ return(ENUM); }
"extern"		{ return(EXTERN); }
"float"			{ strcpy(datatype, "float"); return(FLOAT); }
"for"			{ return(FOR); }
"goto"			{ return(GOTO); }
"if"			{ return(IF); }
"int"			{ strcpy(datatype, "int"); return(INT); }
"long"			{ return(LONG); }
"register"		{ return(REGISTER); }
"return"		{ return(RETURN); }
"short"			{ return(SHORT); }
"signed"		{ return(SIGNED); }
"sizeof"		{ return(SIZEOF); }
"static"		{ return(STATIC); }
"struct"		{ return(STRUCT); }
"switch"		{ return(SWITCH); }
"typedef"		{ return(TYPEDEF); }
"union"			{ return(UNION); }
"unsigned"		{ return(UNSIGNED); }
"void"			{ return(VOID); }
"volatile"		{ return(VOLATILE); }
"while"			{ return(WHILE); }

"#include<"({L})*".h>" {;}
"#define"({space})""({L})""({L}|{D})*""({space})""({D})+"" 			{;}
"#define"({space})""({L}({L}|{D})*)""({space})""(({D}+)\.({D}+))"" 		{;}
"#define"({space})""({L}({L}|{D})*)""({space})""({L}({L}|{D})*)"" 	{;}

{D}+				{insertConstTable(yytext, yylineno, "int"); return CONSTANT;}
({D}+)\.({D}+) 	    { insertConstTable(yytext, yylineno, "float");return(CONSTANT); }

0[xX]{H}+{IS}?		{ insertConstTable(yytext, yylineno, "float");return(CONSTANT); }
0{D}+{IS}?		{ insertConstTable(yytext, yylineno, "float");return(CONSTANT); }
{D}+{IS}?		{ insertConstTable(yytext, yylineno, "float");return(CONSTANT); }
'(\\.|[^\\'])+'	{ insertConstTable(yytext, yylineno, "float");return(CONSTANT); }

{D}+{E}{FS}?		    { insertConstTable(yytext, yylineno, "float"); return(CONSTANT); }
{D}*"."{D}+({E})?{FS}?	{ insertConstTable(yytext, yylineno, "float"); return(CONSTANT); }
{D}+"."{D}*({E})?{FS}?	{ insertConstTable(yytext, yylineno, "float"); return(CONSTANT); }

L?\"(\\.|[^\\"])*\"	{ insertConstTable(yytext, yylineno, "string"); return(STRING_LITERAL); }
\"(.^([%d]|[%f]|[%s]|[%c]))\" {insertConstTable(yytext, yylineno, "string"); return(STRING_LITERAL);}

"..."			{ return(ELLIPSIS); }
">>="			{ return(RIGHT_ASSIGN); }
"<<="			{ return(LEFT_ASSIGN); }
"+="			{ return(ADD_ASSIGN); }
"-="			{ return(SUB_ASSIGN); }
"*="			{ return(MUL_ASSIGN); }
"/="			{ return(DIV_ASSIGN); }
"%="			{ return(MOD_ASSIGN); }
"&="			{ return(AND_ASSIGN); }
"^="			{ return(XOR_ASSIGN); }
"|="			{ return(OR_ASSIGN); }
">>"			{ return(RIGHT_OP); }
"<<"			{ return(LEFT_OP); }
"++"			{ return(INC_OP); }
"--"			{ return(DEC_OP); }
"->"			{ return(PTR_OP); }
"&&"			{ return(AND_OP); }
"||"			{ return(OR_OP); }
"<="			{ return(LE_OP); }
">="			{ return(GE_OP); }
"=="			{ return(EQ_OP); }
"!="			{ return(NE_OP); }
";"			{ strcpy(datatype, "nothing"); return(';'); }
("{"|"<%")		{ return('{'); }
("}"|"%>")		{ return('}'); }
","			{ return(','); }
":"			{ return(':'); }
"="			{ return('='); }
"("			{ return('('); }
")"			{ return(')'); }
("["|"<:")		{ return('['); }
("]"|":>")		{ return(']'); }
"."			{ return('.'); }
"&"			{ return('&'); }
"!"			{ return('!'); }
"~"			{ return('~'); }
"-"			{ return('-'); }
"+"			{ return('+'); }
"*"			{ return('*'); }
"/"			{ return('/'); }
"%"			{ return('%'); }
"<"			{ return('<'); }
">"			{ return('>'); }
"^"			{ return('^'); }
"|"			{ return('|'); }
"?"			{ return('?'); }
"printf"|"scanf"|"main"	{ insertSymbolTable(yytext, "procedure", yylineno); return IDENTIFIER;}
{L}({L}|{D})*		{ 
	
	
	if(strcmp(datatype, "nothing")==0){ 
		return IDENTIFIER;
	}
	else {
		insertSymbolTable(yytext, datatype, yylineno);
		return IDENTIFIER;
	}
	return(check_type()); 
	}

[ \t\v\n\f]		{ }
.			{ printf("Lexical Analysis Error"); }

%%

struct constNode {
	char value[50];
	char type[50];
	//int lineNo;
};
struct constNode constTable[100];
int constCount = 0;

void insertConstTable(char *val, int lineNo, char *dtype) {
	strcpy(constTable[constCount].value, val);
	strcpy(constTable[constCount].type, dtype);
	//strcpy(constTable[constCount].lineNo, lineNo);
	constCount++;
}
void displayConstTable() {
	int i;
	printf("\n\n------------------------------CONSTANT TABLE------------------------------\n");
	printf("--------------------------------------------------------------------------\n");
	printf("Value \t\t|\tData Type\t\t\n");
	printf("--------------------------------------------------------------------------\n");
	for(i=0;i<constCount;i++)
	{
		printf("%s\t\t\t", constTable[i].value);
		printf("%s\t\t\t\n", constTable[i].type);
		//printf("\t%d\t\n", constTable[i].lno);
	}
	printf("\n\n");
}

struct symbolNode {
	char tokenName[50];
	char type[50];
	//int lineNo;
};
struct symbolNode symbolTable[100];
int symbolCount = 0;

void insertSymbolTable(char *token, char *dtype, int line) {
	strcpy(symbolTable[symbolCount].tokenName, token);
	strcpy(symbolTable[symbolCount].type, dtype);
	//strcpy(symbolTable[symbolCount].lineNo, line);
	symbolCount++;
}
void displaySymbolTable() {
	int i;
	printf("\n\n------------------------------SYMBOL TABLE------------------------------\n");
	printf("--------------------------------------------------------------------------\n");
	printf("Token \t\t|\Token Type\t\t\n");
	printf("--------------------------------------------------------------------------\n");
	for(i=0;i<symbolCount;i++)
	{
		printf("%s\t\t\t", symbolTable[i].tokenName);
		printf("%s\t\t\t\n", symbolTable[i].type);
		//printf("\t%d\t\n", symbolTable[i].lineNo);
	}
	printf("\n\n");
}


yywrap()
{
	return(1);
}


multicomment()
{
	char c, c1;
	while ((c = input()) != '*' && c != 0);
	c1=input();
	if(c=='*' && c1=='/')
	{
		c=0;
	}
	if (c != 0)
		putchar(c1);
}
singlecomment()
{
	char c;
	while(c=input()!='\n');
	if(c=='\n')
		c=0;
	if(c!=0)
		putchar(c);
}


