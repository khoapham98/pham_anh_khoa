#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <string.h>

HANDLE readPipe, writePipe; 
HANDLE mutex; 

DWORD WINAPI myThread(LPVOID lpParameter)
{
	WaitForSingleObject(mutex, INFINITE);
	int data2R;
	printf("Du lieu trong pipe: ");
	while (1)
	{
		DWORD bytesRead; 
		if (ReadFile(readPipe, &data2R, sizeof(data2R), &bytesRead, NULL))
		{
			printf("%d ", data2R);
		}
		else
		{
			printf("Khong the doc du lieu trong pipe!\n");
			return 0;
		}
	}
	printf("Doc du lieu thanh cong!\n");
	
	ReleaseMutex(mutex);
}

int main()
{
	HANDLE thread = CreateThread(NULL, 0, myThread, NULL, 0, NULL);
	mutex = CreateMutexA(NULL, 1, NULL);

	if (CreatePipe(&readPipe, &writePipe, NULL, 0))
	{
		printf("Tao pipe thanh cong!\r\n");
	}
	
	int data[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
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
	ReleaseMutex(mutex);
	return 0;
}