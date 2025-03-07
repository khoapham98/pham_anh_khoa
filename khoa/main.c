#include <stdio.h>

int main()
{
	int kwh;
	printf("KWh : ");
	scanf_s("%d", &kwh);

	int money = 1;
	short x = 50, y = 100;
	if (kwh <= 50)
	{
		money = 1678 * kwh;
	}
	else if (kwh <= 100)
	{
		money = (1678 * x) + (1734 * (kwh - 50));
	}
	else if (kwh <= 200)
	{
		money = (1678 * x) + (1734 * x) + (2014 * (kwh - 100));
	}
	else if (kwh <= 300)
	{
		money = (1678 * x) + (1734 * x) + (2014 * y) + (2536 * (kwh - 200));
	}
	else if (kwh <= 400)
	{
		money = (1678 * x) + (1734 * x) + (2014 * y) + (2536 * y) + (2834 * (kwh - 300));
	}
	else
	{
		money = (1678 * x) + (1734 * x) + (2014 * y) + (2536 * y) + (2834 * y) + (2927 * (kwh - 400));
	}

	printf("You have to pay : %d VND", money);
	return 0;
}