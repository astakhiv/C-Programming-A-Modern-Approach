stackclient: stackclient.o stackADT.o
	gcc -o build/stackclient build/stackclient.o build/stackADT.o

stackclient.o: stackclient.c stackADT.h
	gcc -c stackclient.c -o build/stackclient.o

stackADT.o: stackADT.c stackADT.h
	gcc -c stackADT.c -o build/stackADT.o
