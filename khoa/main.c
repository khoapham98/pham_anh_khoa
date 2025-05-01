#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <string.h>

#define TEN "Anh Khoa"
#define TUOI 21

#define GIOI_THIEU(s, x)  printf("Hello my name is %s\n", s);\
							printf("I'm %d years old\n", x);

#define TONG(a, b) (a + b)

int main()
{
	printf("Day la dong thu %d trong file ten: %s\n", __LINE__, __FILE__);
	printf("Bay gio la %s, %s\n", __TIME__, __DATE__);

	GIOI_THIEU(TEN, TUOI)

	printf("TONG: %c\n", TONG('0', '1'));

	return 0;
}