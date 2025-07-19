compare_dates: compare_dates.o ../date.o
	gcc -o compare_dates compare_dates.o ../date.o

compare_dates.o: compare_dates.c ../date.h
	gcc -c compare_dates.c

date.o: ../date.c ../date.h
	gcc -c ../date.c
