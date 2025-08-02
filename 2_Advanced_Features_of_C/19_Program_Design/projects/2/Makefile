rpn: rpn.o stackADT3.o
	gcc -o build/rpn build/rpn.o build/stackADT3.o

rpn.o: rpn.c stackADT.h
	gcc -c rpn.c -o ./build/rpn.o	

stackADT3.o: stackADT3.c stackADT.h
	gcc -c stackADT3.c -o ./build/stackADT3.o 
