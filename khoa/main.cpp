#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct {
	char light;
	char fan;
	char motor;
} smartHome_t;

const char* data = "HTTP1.1 200 OK{"\
"\"light\": \"on\","\
"\"fan\" : \"off\","\
"\"motor\" : \"off\"}";

smartHome_t pair_data(const char* data);

int main()
{
	smartHome_t x = pair_data(data);

	printf("light : %d\n", x.light); 
	printf("fan : %d\n", x.fan);
	printf("motor : %d\n", x.motor);

	return 0;
}

smartHome_t pair_data(const char* data)
{
	smartHome_t a; 
	int size = strlen(data); 
	char str[6] = { 0 };
	int state; 
	for (int i = 0; i < size; i++)
	{
		int cnt = 0;
		if (data[i] >= 'a' && data[i] <= 'z')
		{
			int index = i; 
			while (data[i] >= 'a' && data[i] <= 'z') { cnt++; i++; }
			strncpy(str, &data[index], cnt); 

			while (data[i] < 'a' || data[i] > 'z') { i++; }

			if (data[++i] == 'n')
			{
				state = 1; 
			}
			else
			{
				state = 0; 
				i++; 
			}

			if (!strcmp(str, "light"))
			{
				a.light = state;
			}
			else if (!strcmp(str, "fan"))
			{
				a.fan = state;
			}
			else if (!strcmp(str, "motor"))
			{
				a.motor = state;
			}
		}
	}

	return a; 
}
