#include <stdio.h>
#include <math.h>

int CountSpace(char str[]);

int main()
{
	char string[] = "Hello     World";

	printf("Number of spaces : %d", CountSpace(string));
	return 0;
}

int CountSpace(char str[])
{
	int cnt = 0, i = 0;
	while (str[i] != 0)
	{
		if (str[i] == 32)
		{
			cnt++;
		}
		i++;
	}

	return cnt;
}