#include <stdio.h>
#include <math.h>

int main()
{
	int arr[10];
	int res = 0;

	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &arr[i]);
		res += arr[i];
	}
	printf("Sum = %d\nSize = %llu byte", res, sizeof(arr));

	return 0;
}