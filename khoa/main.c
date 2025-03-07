#include <stdio.h>

int main()
{
	int x;
	printf("Enter your income: ");
	scanf_s("%d", &x);

	int tax, income = x - 11000000;

	if (income <= 0)
	{
		tax = 0;
	}
	else
	{
		if (income <= 5e6)
		{
			tax = income * 0.05;
		}
		else if (income <= 10e6)
		{
			tax = (5e6 * 0.05) + ((income - 5e6) * 0.1);
		}
		else if (income <= 18e6)
		{
			tax = (5e6 * 0.05) + (5e6 * 0.1) + ((income - 10e6) * 0.15);
		}
		else if (income <= 32e6)
		{
			tax = (5e6 * 0.05) + (5e6 * 0.1) + (8e6 * 0.15) + ((income - 18e6) * 0.2);
		}
		else if (income <= 52e6)
		{
			tax = (5e6 * 0.05) + (5e6 * 0.1) + (8e6 * 0.15) + (14e6 * 0.2) + ((income - 32e6) * 0.25);
		}
		else if (income <= 80e6)
		{
			tax = (5e6 * 0.05) + (5e6 * 0.1) + (8e6 * 0.15) + (14e6 * 0.2) + (20e6 * 0.25) + ((income - 52e6) * 0.3);
		}
		else
		{
			tax = (5e6 * 0.05) + (5e6 * 0.1) + (8e6 * 0.15) + (14e6 * 0.2) + (20e6 * 0.25) + (28e6 * 0.3) + ((income - 80e6) * 0.35);
		}
	}

	printf("Your taxable income : %d VND", tax);
	return 0;
}