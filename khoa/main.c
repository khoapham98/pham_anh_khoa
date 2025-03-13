#include <stdio.h>
#include <math.h>

int main()
{
	char str[] = "XiN cHaO";

	int i = 0, cnt = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			cnt++;
		}
		i++;
	}

	printf("So luong ky tu viet hoa : %d", cnt);
	return 0;
}