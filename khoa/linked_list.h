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
void insertNode(linked_list* ll, int val, int index);
void removelastNode(linked_list* ll);
void removeIndexNode(linked_list* ll, int index);
int searchNode(linked_list* ll, int val);
int getTailVal(linked_list* ll);
int getNodeVal(linked_list* ll, int index);
void deleteAll(linked_list* ll);
void printAllNodeVal(linked_list* ll);
