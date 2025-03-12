#include <stdio.h>

int main()
{
	int x, i = 0; 
	do
	{
		printf("Nhap so : ");
		scanf_s("%d", &x);
		i++;
	} while (x != 0 && i < 5);

	return 0;
}