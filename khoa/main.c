#include <stdio.h>

int main()
{
	short password = 1234;
	int cnt = 0, step = 1;

	while (cnt < 3)
	{
		switch (step)
		{
		case 1:
			int userEnter;
			printf("Enter your password: ");
			scanf_s("%d", &userEnter);
			if (userEnter == password)
			{
				step = 2;
			}
			else
			{
				cnt++;
				step = 1;
			}
			break;
		case 2: 
			int amount;
			printf("Enter the amount of money you want to withdraw: ");
			scanf_s("%d", &amount);
			if (amount > 10000)
			{
				step = 2;
			}
			else
			{
				printf("$ = %d VND\n", amount);
				step = 3;
			}
			break;
		case 3: 
			short choice; 
			printf("Continue ? (1-Y / 0-N) : ");
			scanf_s("%hi", &choice);
			if (choice == 0)
			{
				step = 4;
			}
			else
			{
				step = 2;
			}
			break;
		case 4:
			return 0;
		default:
			break;
		}
	}

	return 0;
}