#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

void menu();

int main()
{
	linked_list list;
	createLinkedList(&list);

	int check = 1;
	menu();
	while (check)
	{
		int choice;
		printf("\nUser choice: ");
		scanf("%d", &choice);
		
		switch (choice)
		{
		case 1: 
			printf("Node's value: ");
			int data;
			scanf("%d", &data);
			pushbackNode(&list, data);
			break;
		case 2: 
			printf("Number of nodes: %d\n", getLen(&list));
			break;
		case 3:
			printf("Enter node's value you want to insert: ");
			int val;
			scanf("%d", &val);
			printf("Enter node's index you want to insert node: ");
			int index;
			scanf("%d", &index);
			insertNode(&list, val, index);
			break;
		case 4: 
			removelastNode(&list);
			break;
		case 5:
			printf("Enter node's index you want to remove: ");
			int pos;
			scanf("%d", &pos);
			removeIndexNode(&list, pos);
			break;
		case 6:
			printf("Enter node's value you want to search: ");
			int v;
			scanf("%d", &v);
			printf("Node's index: %d\n", searchNode(&list, v));
			break;
		case 7:
			printf("Last node's value is: %d\n", getTailVal(&list));
			break;
		case 8:
			printf("Enter node's index you want to get value: ");
			int x;
			scanf("%d", &x);
			printf("Value of node #%d : %d\n", x, getNodeVal(&list, x));
			break;
		case 9:
			deleteAll(&list);
			break;
		case 10:
			printAllNodeVal(&list);
			break;
		default:
			check = 0;
		}
	}

	return 0;
}

void menu()
{
	printf("================= MENU ======================\n");
	printf("1.  Add node at the end of linked list\n");
	printf("2.  Print number of nodes\n");
	printf("3.  Insert node into the index position of linked list\n");
	printf("4.  Remove last node of the list\n");
	printf("5.  Remove node at the index position of the list\n");
	printf("6.  Find node's position in linked list\n");
	printf("7.  Print the last node's value\n");
	printf("8.  Print node's value at the index position\n");
	printf("9.  Remove all nodes\n");
	printf("10. Print all nodes information\n");
	printf("#. EXIT\n");
}