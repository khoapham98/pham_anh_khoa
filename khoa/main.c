#include <stdio.h>

void findSubstr(char str[], char substr[]);

int main()
{
	char string[] = "aaaabaaaab";
	char substring[] = "aaab";

	int cnt = 0;
	printf("Char |       Address\n-----+--------------------\n");
	while (string[cnt] != 0)
	{
		printf("  %c  |  %p\n", string[cnt], (void*)&string[cnt]);
		printf("-----+--------------------\n");
		cnt++;
	}

	findSubstr(string, substring);

	return 0;
}

void findSubstr(char str[], char substr[])
{
	int i = 0;
	int address; 

	while (str[i] != 0)
	{
		if (str[i] == substr[0])
		{
			address = i;
			int j = 1, check = 1, tmp = i + 1;
			while (substr[j] != 0)
			{
				if (substr[j] != str[tmp])
				{
					check = 0;
					break;
				}
				tmp++;
				j++;
			}
			if (check)
			{
				printf("First letter's address of [%s] : % p", substr, (void*)&str[address]);
				return;
			}
		}
		i++;
	}

	printf("There is no substring found in the string");
}