#include <stdio.h>

int main()
{
	int kwh;
	printf("KWh : ");
	scanf_s("%d", &kwh);

	int money = 0;
	int i = 0;
	while (kwh > 0)
	{
		++i;
		switch (i)
		{
		case 1:
			if (kwh < 50)
			{
				money = kwh * 1678;
			}
			else
			{
				money = 50 * 1678;
			}
			kwh -= 50;
			break;
		case 2:
			if (kwh < 50)
			{
				money += (kwh * 1734);
			}
			else
			{
				money += (50 * 1734);
			}
			kwh -= 50;
			break;
		case 3:
			if (kwh < 100)
			{
				money += (kwh * 2014);
			}
			else
			{
				money += (100 * 2014);
			}
			kwh -= 100;
			break;
		case 4:
			if (kwh < 100)
			{
				money += (kwh * 2536);
			}
			else
			{
				money += (100 * 2536);
			}
			kwh -= 100;
			break;
		case 5:
			if (kwh < 100)
			{
				money += (kwh * 2834);
			}
			else
			{
				money += (100 * 2834);
			}
			kwh -= 100;
			break;
		default:
			money += (kwh * 2927);
			kwh = 0;
		}
	}

	printf("amount = %d VND", money);
	return 0;
}