#include <stdio.h>
#include <math.h>

int main()
{
	int income;
	printf("Your monthly income (kVND) : ");
	scanf_s("%d", &income);

	float percent[] = { 0.05, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35 };
	int level[] = { 5000, 5000, 8000, 14000, 20000, 28000 };

	int tax = income - 11000;
	if (tax <= 0)
	{
		printf("No taxes! Congrats!");
	}
	else
	{
		float pay = 0;
		int i = 0;
		while (tax > 0 && i < 7)
		{
			if (tax <= level[i] || i == 6)
			{
				pay += tax * percent[i];
			}
			else
			{
				pay += level[i] * percent[i];
			}
			tax -= level[i];
			i++;
		}
		printf("Your tax is : %.0f kVND \n", pay);
	}

	return 0;
}