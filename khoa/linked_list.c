#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>

void createLinkedList(linked_list* ll)
{
	ll->head = NULL;
	ll->tail = NULL;
	ll->len = 0;
}

void pushbackNode(linked_list* ll, int val)
{
	node* newNode = (node*)malloc(sizeof(node));
	newNode->value = val;
	newNode->next = NULL;

	if (ll->len == 0)
	{
		ll->head = newNode;
	}
	else
	{
		ll->tail->next = newNode;
	}
	ll->tail = newNode;
	ll->len++;
}