inventory2: inventory2.o readline.o
	gcc -o build/inventory2 build/inventory2.o build/readline.o

inventory2.o: inventory2.c readline.h
	gcc -c inventory2.c -o build/inventory2.o

readline.o: readline.c readline.h
	gcc -c readline.c -o build/readline.o
