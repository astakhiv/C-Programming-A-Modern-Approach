test_my_malloc: test_my_malloc.o my_malloc.o
	gcc -o test_my_malloc test_my_malloc.o my_malloc.o

test_my_malloc.o: test_my_malloc.c my_malloc.h
	gcc -c test_my_malloc.c

my_malloc.o: my_malloc.c my_malloc.h
	gcc -c my_malloc.c
