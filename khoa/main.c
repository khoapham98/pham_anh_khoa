#include <stdio.h>
#include <math.h>

int main()
{
	long long num;
	printf("Enter number (< 10B VND) : ");
	scanf_s("%lld", &num);

	long long tmp = num;
	int digit = 0;

	while (tmp > 0)
	{
		tmp /= 10;
		digit++;
	}

	int i = digit;
	int arr[10] = { 0 };
	long long tmp1 = num;

	while (tmp1 > 0)
	{
		arr[--i] = tmp1 % 10;
		tmp1 /= 10;
	}

	char *ch[10] = { "khong", "mot", "hai", "ba", "bon", "nam", "sau", "bay", "tam", "chin"};
	char *dv[10] = { "dong", "muoi", "tram", "nghin", "muoi", "tram", "trieu", "muoi", "tram", "ty" };

	printf("\nChu cai : ");
	for (int j = 0, k = digit - 1; j < digit; j++, k--)
	{
		if (j == 0 && arr[j] == 1 && (digit == 5 || digit == 8)) {}
		else 
		{ 
			printf(ch[arr[j]]); 
		}
		printf(" ");
		printf(dv[k]);
		printf(" ");
	}
	
	printf("\n");
	return 0;
}