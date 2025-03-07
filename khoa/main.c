#include <stdio.h>
#include <math.h>
int main()
{
	int a; 
	printf("Enter a number : ");
	scanf_s("%d", &a);

	if (a >= 0)
	{
		printf("This is a positive number!\n");
	}
	else
	{
		printf("This is a negative number!\n");
	}

	return 0;
}