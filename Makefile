all:interpreter

y.tab.cpp:interpreter1.y
		yacc -d -o y.tab.cpp interpreter1.y
lex.yy.cpp:interpreter.l
		lex -o lex.yy.cpp interpreter.l
interpreter: y.tab.cpp lex.yy.cpp exptree1.cpp exptree.hpp codegen.cpp
		g++ y.tab.cpp lex.yy.cpp  exptree1.cpp  codegen.cpp -o interpreter

clean:
	