#include <stdio.h>

int main()
{
	int x; 
	printf("Nhap so : ");
	scanf_s("%d", &x);

	long long res = 1;
	for (int i = 1; i <= x; i++)
	{
		res *= i;
	}

	printf("Giai thua cua %d la : %lld", x, res);
	return 0;
}