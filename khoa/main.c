#include <stdio.h>
#include <math.h>

int findMax(int a[]);

int main()
{
	int arr[10] = { 0 };

	for (int i = 0; i < 10; i++)
	{
		printf("arr[%d] = ", i);
		scanf_s("%d", &arr[i]);
	}

	printf("Max number is : %d", findMax(arr));
	return 0;
}

int findMax(int a[])
{
	int max = a[0];
	for (int i = 1; i < 10; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	return max; 
}