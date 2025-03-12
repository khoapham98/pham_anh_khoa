#include <stdio.h>
#include <math.h>

int main()
{
	int a, b;
	printf("a = ");
	scanf_s("%d", &a);
	printf("b = ");
	scanf_s("%d", &b);

	if (a == 0 && b == 0)
	{
		printf("Khong xac dinh");
	}
	else if (a == 0 || b == 0)
	{
		printf("Uoc so chung lon nhat : %.0f", fmax(a, b));
	}
	else
	{
		for (int i = fmin(abs(a), abs(b)); i >= 1; i--)
		{
			if (a % i == 0 && b % i == 0)
			{
				printf("Uoc so chung lon nhat : %d", i);
				break;
			}
		}
	}
	
	return 0;
}