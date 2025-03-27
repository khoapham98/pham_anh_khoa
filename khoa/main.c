#include <stdio.h>
#include "linked_list.h"

int main()
{
	linked_list_t list;

	createLinklist(&list);

	addNode(&list, 10);
	addNode(&list, 40);
	addNode(&list, 70);

	printf("number of nodes :  %d", getlen(&list));

	return 0;
}