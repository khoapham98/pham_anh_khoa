#include <stdio.h>
#include <math.h>

int CountChar(char str[]);

int main()
{
	char string[] = "Hello World";

	printf("Characters : %d", CountChar(string));
	return 0;
}

int CountChar(char str[])
{
	int cnt = 0;

	while (str[cnt] != 0)
	{
		cnt++;
	}
	return cnt;
}