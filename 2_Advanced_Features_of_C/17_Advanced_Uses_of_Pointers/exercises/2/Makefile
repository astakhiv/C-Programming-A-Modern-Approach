./build/test_duplicate: ./build/test_duplicate.o ./build/duplicate.o
	gcc -o test_duplicate test_duplicate.o duplicate.o

./build/test_duplicate.o: test_duplicate.c duplicate.h
	gcc -c test_duplicate.c ./build/

./build/duplicate.o: duplicate.c duplicate.h
	gcc -c duplicate.c ./build/
