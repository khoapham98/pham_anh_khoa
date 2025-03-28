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
	node* tail;
	int len;
}linked_list;

void createLinkedList(linked_list* ll);
void pushbackNode(linked_list* ll, int val);
int getLen(linked_list* ll);