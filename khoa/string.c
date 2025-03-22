#include "mylib.h"

int findSize(char* str)
{
	int cnt = 0;
	while (str[cnt] != 0)
	{
		cnt++;
	}

	return cnt;
}

char* findCh(char* ptr, char ch)
{
	int i = 0;
	for (int i = 0; i < findSize(ptr); i++)
	{
		if (*(ptr + i) == ch)
		{
			return ptr + i;
		}
		i++;
	}
	return 0;
}

char* findSubstr(char* str, char* substr)
{
	int i = 0;
	while (*(substr + i) != 0)
	{
		int j = 0;
		while ((*substr + i) != *(str + j))
		{
			j++;
		}
		i++;
	}
}

int countSpace(char* str)
{
	int i = 0, cnt = 0;
	while (str[i] != 0)
	{
		if (str[i] == ' ')
		{
			cnt++;
		}
		i++;
	}
	return cnt;
}

void uppercase(char* str)
{
	for (int i = 0; i < findSize(str); i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z') 
		{
			str[i] -= 32;
		}
	}
}

int isWord(char ch)
{
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
	{
		return 1; 
	}
	else
	{
		return 0;
	}
}

int countWord(char* str)
{
	int cnt = 0;
	for (int i = 0; i < findSize(str); i++)
	{
		if (isWord(str[i]) && !isWord(str[i - 1]))
		{
			cnt++;
		}
	}
	return cnt;
}