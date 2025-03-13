#include <stdio.h>
#include <math.h>

int main()
{
	int enterMoney;
	do
	{
		printf("Amount of money you want to withdraw (kVND) : ");
		scanf_s("%d", &enterMoney);
	} while (enterMoney % 50 != 0);

	int price[] = { 50, 100, 200, 500 };
	int to[] = { 0, 0, 0, 0 };
	int moneyOut = 0;
	int i = 0;

	while (moneyOut < enterMoney)
	{
		if ((moneyOut + price[i]) <= enterMoney)
		{
			moneyOut += price[i];
			to[i]++;
		}
		i++;

		if (i > 3)
		{
			i = 0;
		}
	}

	for (int i = 0; i < 4; i++)
	{
		printf("%d x %dk VND \n", to[i], price[i]);
	}

	return 0;
}