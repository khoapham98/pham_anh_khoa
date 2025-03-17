#include <stdio.h>
#include <math.h>

int main()
{
	int arr[10] = { 0 };
	
	for (int i = 0; i < 10; i++)
	{
		printf("arr[%d] = ", i);
		scanf_s("%d", &arr[i]);
	}
	
	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		sum += arr[i];
	}
	printf("SUM = %d", sum);

	return 0;
}