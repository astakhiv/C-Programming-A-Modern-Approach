test_color: test_color.o color.o
	gcc -o test_color test_color.o color.o

test_color.o: test_color.c color.h
	gcc -c test_color.c

color.o: color.c color.h
	gcc -c color.c
