#include <stdio.h>
#include <math.h>

int main()
{
	int arr[10];
	int res = 0;

	for (int i = 0; i < 10; i++)
	{
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

	printf("Positions of max = %d is : ", max);
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] == max)
		{
			printf("%d ", i);
		}
	}

	return 0;
}