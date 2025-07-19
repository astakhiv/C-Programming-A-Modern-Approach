test_rectangle: test_rectangle.o rectangle.o
	gcc -o test_rectangle test_rectangle.o rectangle.o

test_rectangle.o: test_rectangle.c rectangle.h
	gcc -c test_rectangle.c

rectangle.o: rectangle.c rectangle.h
	gcc -c rectangle.c
