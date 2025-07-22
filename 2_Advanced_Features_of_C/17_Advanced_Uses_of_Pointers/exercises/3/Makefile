test_create_array: test_create_array.o create_array.o
	gcc -o test_create_array test_create_array.o create_array.o

test_create_array.o: test_create_array.c create_array.h
	gcc -c test_create_array.c

create_array.o: create_array.c create_array.h
	gcc -c create_array.c
