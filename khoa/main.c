#include <stdio.h>

int main()
{
	int x; 
	printf("Enter number: ");
	scanf_s("%d", &x);

	int res = 0;
	while (x > 0)
	{
		int tmp = x % 10;
		if (tmp % 2 == 0)
		{
			res += tmp;
		}
		x /= 10;
	}
	printf("Sum of even numbers = %d", res);

	return 0;
}