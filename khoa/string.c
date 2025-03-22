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