#include <stdio.h>
#include <math.h>

int main()
{
	int arr[10] = { 0 };
	int sum = 0, cnt = 0;

	for (int i = 0; i < 10; i++)
	{
		printf("arr[%d] = ", i);
		scanf_s("%d", &arr[i]);
	}

	int max = arr[0];
	for (int i = 1; i < 10; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}

	printf("Cac vi tri cua max : ");
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] == max) 
		{
			printf("%d ", i);
		}
	}
	return 0;
}