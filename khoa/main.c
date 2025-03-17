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
		if (arr[i] % 2 != 0)
		{
			sum += arr[i];
			cnt++;
		}
	}

	if (sum == 0)
	{
		printf("Khong co so le trong mang!");
	}
	else
	{
		printf("SUM = %.2f", sum / (float) cnt);
	}
	return 0;
}