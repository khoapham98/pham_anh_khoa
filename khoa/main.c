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
void printStudent(student hs);
void printHighestGPA(student* list, int size);
void sortStudent(student* list, int size);

int main()
{
	student studentList[4] = { 0 };
	
	enterInfo(studentList, 4);

	sortStudent(studentList, 4);

	printf("Student list from high GPA to low GPA\n");
	for (int i = 0; i < 4; i++)
	{
		printStudent(studentList[i]);
	}

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
	}
}

void printStudent(student hs)
{
	printf("Name: %s, ", hs.name);
	printf("age: %d, ", hs.age);
	printf("sex: %s, ", hs.sex);
	printf("math score: %.2f, ", hs.mathScore);
	printf("literature score: %.2f, ", hs.literScore);
	printf("GPA: %.2f, ", hs.GPA);
	printf("Rank: %d\n", hs.rank);
}

void printHighestGPA(student* list, int size)
{
	int index = 0;
	float max = list[0].GPA;

	for (int i = 1; i < size; i++)
	{
		if (list[i].GPA > max)
		{
			max = list[i].GPA;
			index = i;
		}
	}

	printf("Student with highest GPA is : \n");
	printStudent(list[index]);
}

void sortStudent(student* list, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1 - i; j++) 
		{
			if (list[j].GPA < list[j + 1].GPA)
			{
				student tmp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = tmp;
			}
		}
	}
}