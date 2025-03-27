#pragma once
typedef struct
{
	int value;
	struct node_t* previous_node;
}node_t;

typedef struct
{
	node_t* last_node;
	int len;
}linked_list_t;