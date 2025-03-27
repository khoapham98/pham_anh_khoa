#include "linked_list.h"
#include <stdio.h>

node_t* createNode(int x)
{
	node_t* newNode = (node_t*) malloc(sizeof(node_t));
	newNode->value = x;
	newNode->previous_node = NULL;
	
	return newNode;
}