#include <stdio.h>
#include <math.h>
int main()
{
	int a; 
	printf("Enter a number : ");
	scanf_s("%d", &a);

	if (a % 2 == 0)
	{
		printf("This is an even number!\n");
	}
	else
	{
		printf("This is an odd number!\n");
	}

	return 0;
}