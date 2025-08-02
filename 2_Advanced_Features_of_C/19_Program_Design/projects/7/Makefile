test_queue: test_queue.o queue3.o
	gcc -o build/test_queue build/test_queue.o build/queue3.o

test_queue.o: test_queue.c queue.h
	gcc -c test_queue.c -o build/test_queue.o

queue3.o: queue3.c queue.h
	gcc -c queue3.c -o build/queue3.o
