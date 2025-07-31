test_queue: test_queue.o queue2.o
	gcc -o build/test_queue build/test_queue.o build/queue2.o

test_queue.o: test_queue.c queue.h
	gcc -c test_queue.c -o build/test_queue.o

queue2.o: queue2.c queue.h
	gcc -c queue2.c -o build/queue2.o
