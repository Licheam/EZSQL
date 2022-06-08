CXX=g++
CXXFLAGS= -std=c++17 -Wall

main: main.cpp lex.yy.c y.tab.o utils.o database.o table.o
	g++ -o main main.cpp lex.yy.c y.tab.o utils.o database.o table.o

database.o: database.cpp database.h
table.o: table.h

utils.o: utils.cpp utils.h

lex.yy.c: ezsql.l
	lex ezsql.l

y.tab.o: y.tab.h
	g++ -std=c++17 -Wall -c y.tab.c

y.tab.c y.tab.h: ezsql.y
	/usr/local/Cellar/bison/3.8.2/bin/yacc -d ezsql.y
