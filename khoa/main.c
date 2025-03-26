#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "mylib.h"

typedef struct
{
	char name[40];
	int age;
	char sex[5];
	float mathScore, literScore, GPA;
	int rank;
} student;

void enterInfo(student* list, int size);
void printList(student* list, int size);

int main()
{
	student studentList[4] = { 0 };
	
	enterInfo(studentList, 4);

	printList(studentList, 4);

	return 0;
}

void enterInfo(student* list, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("Enter student %d's information\n", i + 1);
		printf("Name: ");
		gets(list[i].name);
		printf("Age: ");
		scanf("%d", &list[i].age);
		printf("Sex: ");
		getchar();
		gets(list[i].sex);
		printf("math Score: ");
		scanf("%f", &list[i].mathScore);
		printf("Literature Score: ");
		scanf("%f", &list[i].literScore);
		getchar();
	}
}


void printList(student* list, int size)
{
	printf("Student List:\n");
	for (int i = 0; i < size; i++)
	{
		list[i].GPA = (list[i].mathScore + list[i].literScore) / 2;
		if (list[i].GPA >= 8)
		{
			list[i].rank = 0;
		}
		else if (list[i].GPA >= 6.5)
		{
			list[i].rank = 1;
		}
		else if (list[i].GPA >= 5)
		{
			list[i].rank = 2;
		}
		else
		{
			list[i].rank = 3;
		}

		printf("%d. Name: %s, ", i + 1, list[i].name);
		printf("age: %d, ", list[i].age);
		printf("sex: %s, ", list[i].sex);
		printf("math score: %.2f, ", list[i].mathScore);
		printf("literature score: %.2f, ", list[i].literScore);
		printf("GPA: %.2f, ", list[i].GPA);
		printf("Rank: %d\n", list[i].rank);
	}
}