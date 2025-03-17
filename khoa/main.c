#include <stdio.h>
#include <math.h>

void checkPrime(int a[]);

int main()
{
	int arr[10] = { 0 };

	for (int i = 0; i < 10; i++)
	{
		printf("arr[%d] = ", i);
		scanf_s("%d", &arr[i]);
	}

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] > 1)
		{
			checkPrime(arr[i]);
		}
	}

	return 0;
}

void checkPrime(int num)
{
	int isPrime = 1;
	for (int i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0)
		{
			isPrime = 0;
			break;
		}
	}
	if (isPrime)
	{
		printf("%d ", num);
	}
}
