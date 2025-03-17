#include <stdio.h>
#include <math.h>

int WordCnt(char str[]);
int isWord(char ch);

int main()
{
	char string[] = "Hello\tworld\nthis is\ta test";
	printf("Number of word : %d", WordCnt(string));
	return 0;
}

int WordCnt(char str[])
{
	int cnt = 0, i = 0;
	while (str[i] != 0)
	{
		if (isWord(str[i]) && !isWord(str[i + 1]))
		{
			cnt++;
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