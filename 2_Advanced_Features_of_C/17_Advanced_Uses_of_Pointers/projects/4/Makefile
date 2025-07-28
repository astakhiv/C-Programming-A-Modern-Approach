justify: justify.o word.o line.o
	gcc -o build/justify build/justify.o build/word.o build/line.o

justify.o: justify.c word.h line.h
	gcc -c justify.c -o build/justify.o

word.o: word.c word.h
	gcc -c word.c -o build/word.o

line.o: line.c line.h
	gcc -c line.c -o build/line.o
