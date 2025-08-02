stackclient: stackclient.o stackADT3.o
	gcc -o build/stackclient build/stackclient.o build/stackADT3.o

stackclient.o: stackclient.c stackADT.h
	gcc -c stackclient.c -o build/stackclient.o

stackADT3.o: stackADT3.c stackADT.h
	gcc -c stackADT3.c -o build/stackADT3.o
