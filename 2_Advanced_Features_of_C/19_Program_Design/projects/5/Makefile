test_queue: test_queue.o queue1.o
	gcc -o build/test_queue build/test_queue.o build/queue1.o

test_queue.o: test_queue.c queue.h
	gcc -c test_queue.c -o build/test_queue.o

queue1.o: queue1.c queue.h
	gcc -c queue1.c -o build/queue1.o
