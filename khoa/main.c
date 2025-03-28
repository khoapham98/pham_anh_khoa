#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int main()
{
	linked_list list;

	createLinkedList(&list);
	
	pushbackNode(&list, 10);

	pushbackNode(&list, 20);

	pushbackNode(&list, 30);

	pushbackNode(&list, 40);

	printf("Linked List length: %d", getLen(&list));

	return 0;
}
