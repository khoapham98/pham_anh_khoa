#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <string.h>

void printf_log(char* s)
{
	for (int i = 0; i < strlen(s); i++)
	{
		printf("%c", s[i]);
		Sleep(1000);
	}
}

DWORD WINAPI myThread(LPVOID lpParameter)
{
	printf_log("Hello World!\n");
}

int main()
{

	HANDLE thread = CreateThread(NULL, 0, myThread, NULL, 0, NULL);

	printf_log("This is function main!\n");
	return 0;
}