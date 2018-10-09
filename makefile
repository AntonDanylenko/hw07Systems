all:linked_lists.o main.o
	gcc linked_lists.o main.o
linked_list.o: linked_lists.c linked_lists.h
	gcc -c linked_lists.c
main.o: main.c linked_lists.h
	gcc -c main.c
