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
		if (arr[i] < 0)
		{
			arr[i] = 0;
		}
	}

	printf("New array : ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}