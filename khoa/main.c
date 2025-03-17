#include <stdio.h>

int CapFirstLetter(char str[]);
int isWord(char ch);

int main()
{
	char string[] = "nguyen van a";
	
	CapFirstLetter(string);

	printf("New string : %s", string);
	
	return 0;
}

int CapFirstLetter(char str[])
{
	int cnt = 0, i = 0;
	while (str[i] != 0)
	{
		if (isWord(str[i]) && str[i] >= 97 && !isWord(str[i - 1]))
		{
			str[i] -= 32;
		}
		i++;
	}

	return cnt;
}

int isWord(char ch)
{
	if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
	{
		return 1; 
	}
	else
	{
		return 0;
	}
}