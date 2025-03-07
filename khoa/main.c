#include <stdio.h>

int main()
{
	int kwh;
	printf("KWh : ");
	scanf_s("%d", &kwh);

	int price[6] = {1678, 1734, 2014, 2536, 2834, 2927};
	int money = 0, i = 0;

	while (kwh > 0)
	{
		if (i < 2)
		{
			if (kwh <= 50)
			{
				money += (kwh * price[i]);
			}
			else
			{
				money += (50 * price[i]);
			}
			kwh -= 50;
		}
		else 
		{
			if (kwh <= 100)
			{
				money += (kwh * price[i]);
			}
			else
			{
				money += (100 * price[i]);
			}
			kwh -= 100;
		}
		i++;
		if (i > 5)
		{
			i = 5;
		}
	}

	printf("You have to pay : %d VND !\n", money);
	return 0;
}