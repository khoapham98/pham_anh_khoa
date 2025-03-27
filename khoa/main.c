#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int xyluChuoi(char* str);

int main()
{
	char* str = "led_1: on, led_2: off, led_3: on";

	printf("%d", xyluChuoi(str));

	return 0;
}

int xyluChuoi(char* str)
{
	char* substr = "led_2: ";
	char* ptr = strstr(str, substr) + strlen(substr);

	int size = 0;
	while (ptr[size] != ',')
	{
		size++;
	}

	char stt[3];
	for (int i = 0; i < size; i++)
	{
		stt[i] = ptr[i];
	}

	if (!strcmp(stt, "on"))
	{
		return 1;
	}
	else if (!strcmp(stt, "off"))
	{
		return 0;
	}
}