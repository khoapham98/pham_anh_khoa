#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <string.h>

volatile char cnt;
HANDLE readPipe, writePipe; 


DWORD WINAPI myThread(LPVOID lpParameter)
{

}

int main()
{
	HANDLE thread = CreateThread(NULL, 0, myThread, NULL, 0, NULL);
	if (CreatePipe(&readPipe, &writePipe, NULL, 0))
	{
		printf("Tao pipe thanh cong!");
	}

	return 0;
}