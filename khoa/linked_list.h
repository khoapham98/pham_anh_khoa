#pragma once
struct node_t
{
	int value;
	struct node_t* previous_node;
};

typedef struct node_t node_t;

typedef struct
{
	node_t* last_node;
	int len;
}linked_list_t;

node_t* createNode(int x);