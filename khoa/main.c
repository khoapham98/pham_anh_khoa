#include <stdio.h>

int main()
{
	int x; 
	do
	{
		printf("Nhap so : ");
		scanf_s("%d", &x);
	} while (x != 0);

	return 0;
}