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


	insertNode(&list, 25, 2);

	insertNode(&list, 15, 1);

	insertNode(&list, 5, 0);

	insertNode(&list, 45, 7);

	removelastNode(&list);

	return 0;
}
