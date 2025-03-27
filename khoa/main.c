#include <stdio.h>
#include "linked_list.h"

int main()
{
	linked_list_t list;

	createLinklist(&list);

	printf("%d", getlen(&list));

	return 0;
}