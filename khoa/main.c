#include <stdio.h>
#include <math.h>

void Capital(char str[]);

int main()
{
	char string[] = "Hello World";
	Capital(string);
	printf("Number of spaces : %s", string);
	return 0;
}

void Capital(char str[])
{
	int cnt = 0, i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
		i++;
	}
}