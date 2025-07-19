test_fractions: test_fractions.o fraction.o
	gcc -o test_fractions test_fractions.o fraction.o

test_fractions.o: test_fractions.c fraction.h
	gcc -c test_fractions.c

fraction.o: fraction.c fraction.h
	gcc -c fraction.c
