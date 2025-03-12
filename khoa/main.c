#include <stdio.h>
#include <math.h>

int main()
{
	int num;
	printf("Enter number : ");
	scanf_s("%d", &num);

	if (num > 2)
	{
		for (int i = 2; i < num; i++)
		{
			int check = 1;
			for (int j = 2; j < i; j++)
			{
				if (i % j == 0)
				{
					check = 0;
					break;
				}
			}
			if (check)
			{
				printf("%d\n", i);
			}
		}
	}
	else
	{
		printf("NONE");
	}

	return 0;
}