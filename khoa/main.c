#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "mylib.h"

typedef struct
{
	char* ten;
	int tuoi;
	float diem_toan;
	float diem_van;
	float gpa;
	int xep_loai;
} hocsinh;


int main()
{
	hocsinh a = { "anh khoa", 22, 7.5, 4.6, 5.4, 1 };

	printf("%s", a.ten);
	return 0;
}