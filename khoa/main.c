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

int main()
{
	student studentList[4] = { 0 };
	enterInfo(studentList, 2);

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