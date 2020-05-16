Steps to Compile & Run

1) lex lexer.l  (To generate lex.yy.c )
2) yacc parser.y   (To generate y.tab.c)
3) gcc y.tab.c -ll -w	(To generate executable a.out)
4) ./a.out No\ Error/test1.c     (To execute the lexer and parser)
