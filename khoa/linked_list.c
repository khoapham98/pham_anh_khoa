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

int getLen(linked_list* ll)
{
	return ll->len;
}

void insertNode(linked_list* ll, int val, int index)
{
	node* newNode = (node*)malloc(sizeof(node));
	newNode->value = val;
	newNode->next = NULL;

	if (index == 0)
	{
		newNode->next = ll->head;
		ll->head = newNode;
		ll->len++;
		return;
	}
	else if (index == getLen(ll))
	{
		ll->tail->next = newNode;
		ll->tail = newNode;
		ll->len++;
		return;
	}

	node* prevNode = NULL;
	node* curNode = ll->head;
	node* nextNode = ll->head->next;

	for (int i = 0; i < index; i++)
	{
		prevNode = curNode;
		curNode = nextNode;
		nextNode = curNode->next;
	}

	prevNode->next = newNode;
	newNode->next = curNode;
	ll->len++;

	printf("You have inserted successfully !\n");
}

void removelastNode(linked_list* ll)
{
	int size = getLen(ll);

	if (size == 0)
	{
		printf("There is no node in the linked list yet !\n");
		return;
	}

	node* curNode = NULL;
	node* nextNode = ll->head;

	for (int i = 0; i < size - 1; i++)
	{
		curNode = nextNode;
		nextNode = curNode->next;
	}
	
	free(ll->tail);
	curNode->next = NULL;
	ll->tail = curNode;
	ll->len--;

	printf("You have removed last node successfully !\n");
}

void removeIndexNode(linked_list* ll, int index)
{
	node* curNode = NULL;
	node* nextNode = ll->head;

	if (ll->len == 0)
	{
		printf("There is no node in the linked list yet !\n");
		return;
	}

	if (index == 0)
	{
		curNode = nextNode;
		ll->head = curNode->next;
		ll->len--;
		free(nextNode);
		return;
	}

	for (int i = 0; i < index; i++)
	{
		curNode = nextNode;
		nextNode = curNode->next;
	}
	curNode->next = nextNode->next;
	free(nextNode);
	ll->len--;

	printf("You have remove node successfully !\n");
}

int searchNode(linked_list* ll, int val)
{
	int pos = -1;

	node* curNode = NULL;
	node* nextNode = ll->head;
	int size = getLen(ll);

	for (int i = 0; i < size; i++)
	{
		curNode = nextNode;
		if (curNode->value == val)
		{
			pos = i;
			break;
		}
		nextNode = curNode->next;
	}

	return pos;
}

int getTailVal(linked_list* ll)
{
	return ll->tail->value;
}

int getNodeVal(linked_list* ll, int index)
{
	if (index >= getLen(ll))
	{
		printf("Index NOT FOUND !\n");
		return 0;
	}

	node* curNode = NULL;
	node* nextNode = ll->head;

	for (int i = 0; i <= index; i++)
	{
		curNode = nextNode;
		nextNode = curNode->next;
	}
	return curNode->value;
}

void deleteAll(linked_list* ll)
{
	node* curNode = NULL;
	node* nextNode = ll->head;
	int size = getLen(ll);

	for (int i = 0; i < size; i++)
	{
		curNode = nextNode;
		nextNode = curNode->next;
		free(curNode);
		ll->len--;
	}

	ll->head = NULL;
	ll->tail = NULL;
	printf("You have deleted all nodes successfully !\n");
}

void printAllNodeVal(linked_list* ll)
{
	int cnt = 1;
	for (node* i = ll->head; i != NULL; i = i->next)
	{
		printf("Node %d | Node address: %p ; Value: %d ; Pointer: %p\n", cnt, i, i->value, i->next);
		cnt++;
	}
	if (ll->len == 0)
	{
		printf("There is no node in the linked list yet !\n");
	}
}