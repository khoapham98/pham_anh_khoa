#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>

node_t* createNode(int x)
{
	node_t* newNode = (node_t*) malloc(sizeof(node_t));
	newNode->value = x;
	newNode->previous_node = NULL;
	
	return newNode;
}

void createLinklist(linked_list_t* linkedList)
{
	linkedList->last_node = NULL;
	linkedList->len = 0;
}

int getlen(linked_list_t* linkedList)
{
	return linkedList->len;
}

void addNode(linked_list_t* linkedList, int x)
{
	linkedList->last_node = createNode(x);
	linkedList->len++;
}