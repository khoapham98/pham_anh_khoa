#include <stdio.h>

int main()
{
	int a, b;
	printf("a = ");
	scanf_s("%d", &a);
	printf("b = ");
	scanf_s("%d", &b);

	if (a > b)
	{
		printf("Greatest number is %d", a);
	}
	else
	{
		printf("Greatest number is %d", b);
	}

	return 0;
}