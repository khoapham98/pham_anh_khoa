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
}

void removelastNode(linked_list* ll)
{
	int size = getLen(ll);

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
}

void removeIndexNode(linked_list* ll, int index)
{
	node* curNode = NULL;
	node* nextNode = ll->head;

	for (int i = 0; i < index; i++)
	{
		curNode = nextNode;
		nextNode = curNode->next;
	}
	curNode->next = nextNode->next;
	free(nextNode);
	ll->len--;
}