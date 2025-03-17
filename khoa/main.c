#include <stdio.h>
#include <math.h>

void print_odd(int a[]);

int main()
{
	int arr[10] = { 0 };

	for (int i = 0; i < 10; i++)
	{
		printf("arr[%d] = ", i);
		scanf_s("%d", &arr[i]);
	}
	print_odd(arr);

	return 0;
}

void print_odd(int a[])
{
	for (int i = 0; i < 10; i++)
	{
		if (a[i] % 2 != 0)
		{
			printf("%d ", a[i]);
		}
	}
}
