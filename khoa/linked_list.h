#pragma once

struct node
{
	int value;
	struct node* next;
};
typedef struct node node;

typedef struct 
{
	node* head;
	int len;
}linked_list;

void createLinkedList(linked_list* ll);