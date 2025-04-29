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
		printf("Tao pipe thanh cong!\r\n");
	}
	
	int data[] = { 0, 1, 4, 6, 3, 7, 3, 7, 2, 9 };

	for (int i = 0; i < 10; i++)
	{
		DWORD bytesWritten; 
		if (!WriteFile(writePipe, &data[i], sizeof(data[i]), &bytesWritten, NULL))
		{
			printf("Ghi du lieu vao pipe that bai!\n");
			break;
		}
	}
	printf("Ghi du lieu vao pipe thanh cong!\n");
	return 0;
}