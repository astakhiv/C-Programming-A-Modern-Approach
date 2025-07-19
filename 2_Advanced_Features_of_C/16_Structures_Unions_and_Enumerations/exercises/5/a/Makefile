day_of_year: day_of_year.o ../date.o
	gcc -o day_of_year day_of_year.o ../date.o

day_of_year.o: day_of_year.c ../date.h
	gcc -c day_of_year.c

date.o: ../date.c ../date.h
	gcc -c ../date.c
