#include <stdio.h>

int main()
{
	int a, b, c;
	printf("a = ");
	scanf_s("%d", &a);
	printf("b = ");
	scanf_s("%d", &b);
	printf("c = ");
	scanf_s("%d", &c);

	if (a > b && a > c)
	{
		printf("Greatest number is %d", a);
	}
	else if (b > a && b > c)
	{
		printf("Greatest number is %d", b);
	}
	else
	{
		printf("Greatest number is %d", c);
	}

	return 0;
}