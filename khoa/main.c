#include <stdio.h>
#include <math.h>

void swap(int *x, int *y);

int main()
{
	int a, b; 
	printf("a = ");
	scanf_s("%d", &a);
	printf("b = ");
	scanf_s("%d", &b);

	swap(&a, &b);
	printf("a = %d\nb = %d", a, b);

	return 0;
}

void swap(int *x, int *y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}