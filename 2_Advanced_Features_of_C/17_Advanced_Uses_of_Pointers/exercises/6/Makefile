test_delete_from_list: test_delete_from_list.o delete_from_list.o
	gcc -o build/test_delete_from_list build/test_delete_from_list.o build/delete_from_list.o

test_delete_from_list.o: test_delete_from_list.c delete_from_list.h
	gcc -c test_delete_from_list.c -o build/test_delete_from_list.o

delete_from_list.o: delete_from_list.c delete_from_list.h
	gcc -c delete_from_list.c -o build/delete_from_list.o
