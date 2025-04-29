#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <string.h>

HANDLE mutex_lock;
char cnt;

void printf_log(char* s)
{
	for (int i = 0; i < strlen(s); i++)
	{
		printf("%c", s[i]);
		Sleep(300);
	}
}

DWORD WINAPI myThread(LPVOID lpParameter)
{
	while (1)
	{
		WaitForSingleObject(mutex_lock, INFINITE);
		printf_log("This is myThread function!\n");
		ReleaseMutex(mutex_lock);
	}
}

int main()
{
	HANDLE thread = CreateThread(NULL, 0, myThread, NULL, 0, NULL);
	mutex_lock = CreateMutexA(NULL, 0, NULL);
	while (1)
	{
		WaitForSingleObject(mutex_lock, INFINITE);
		printf_log("This is main function!\n");
		ReleaseMutex(mutex_lock);
	}
	return 0;
}