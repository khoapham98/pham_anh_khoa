#include <stdio.h>

void findAddress(char str[]);

int main()
{
	char string[] = "Hello World c";

	findAddress(string);

	return 0;
}

void findAddress(char str[])
{
	int i = 0;
	while (str[i] != 0)
	{
		if (str[i] == 'c')
		{
			printf("Address : %p", (void *) &str[i]);
			return;
		}
		i++;
	}
	printf("There is no letter 'c' in the string");
}