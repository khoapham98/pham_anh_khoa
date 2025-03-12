#include <stdio.h>
#include <math.h>

int main()
{
	int a, b;
	printf("a = ");
	scanf_s("%d", &a);
	printf("b = ");
	scanf_s("%d", &b);

	double h = (b - a) / 1000.0;
	double res = 0; 

	for (int i = 0; i < 1000; i++)
	{
		res += (h * (pow((a + (i * h)), 2) + pow((a + ((i + 1) * h)), 2))) / 2;
	}

	printf("Tich phan cua f(x) trong khoang [%d, %d] = %.3lf", a, b, res);
	return 0;
}