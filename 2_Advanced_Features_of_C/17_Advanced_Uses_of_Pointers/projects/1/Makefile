inventory: inventory.o readline.o
	gcc -o build/inventory build/inventory.o build/readline.o

inventory.o: inventory.c readline.h
	gcc -c inventory.c -o build/inventory.o

readline.o: readline.c readline.h
	gcc -c readline.c -o build/readline.o
