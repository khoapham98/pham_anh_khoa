#include <stdio.h>

int main()
{
	int x; 
	printf("Enter number: ");
	scanf_s("%d", &x);

	int res = 0;
	while (x > 0)
	{
		res += x % 10;
		x /= 10;
	}
	printf("Sum = %d", res);

	return 0;
}