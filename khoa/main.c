#include <stdio.h>
#include <math.h>
int main()
{
	int money;
	printf("Amount of money you want to deposit (VND) : ");
	scanf_s("%d", &money);
	float interest;
	printf("Percent of interest per year : ");
	scanf_s("%f", &interest);
	int year;
	printf("Number of years : ");
	scanf_s("%d", &year);

	long long res;
	res = money * pow((1 + (interest / 100)), year);
	printf("$ after %d years : %lld VND\n", year, res);

	return 0;
}