test_shape: test_shape.o shape.o
	gcc -o test_shape test_shape.c shape.o

test_shape.o: test_shape.c shape.h
	gcc -c test_shape.c

shape.o: shape.c shape.h
	gcc -c shape.c
