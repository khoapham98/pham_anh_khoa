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

void tinhdiem(hocsinh* ptr, int size)
{
	for (int i = 0; i < size; i++)
	{
		ptr[i].gpa = (ptr[i].diem_toan + ptr[i].diem_van) / 2;
		if (ptr[i].gpa >= 8)
		{
			ptr[i].xep_loai = 0;
		}
		else if (ptr[i].gpa >= 6.5)
		{
			ptr[i].xep_loai = 1;
		}
		else if (ptr[i].gpa >= 5)
		{
			ptr[i].xep_loai = 2;
		}
		else
		{
			ptr[i].xep_loai = 3;
		}
	}
}

hocsinh timHSG(hocsinh* ptr, int size)
{
	float max = ptr[0].gpa;
	int index = 0;

	for (int i = 1; i < size; i++)
	{
		if (ptr[i].gpa > max)
		{
			max = ptr[i].gpa;
			index = i;
		}
	}

	return ptr[index];
}

int main()
{
	hocsinh danhSachHocsinh[] = {
		{ "anh khoa", 22, 7.5, 6.5 },
		{ "quoc qui", 22, 8, 7},
		{ "quy hoa", 22, 8.5, 7.5},
		{ "tommy", 22, 5, 4.5},
	};

	tinhdiem(danhSachHocsinh, 4);

	for (int i = 0; i < 4; i++)
	{
		printf("xep loai cua %s : %d - GPA : %.2f \n", danhSachHocsinh[i].ten, danhSachHocsinh[i].xep_loai, danhSachHocsinh[i].gpa);
	}

	hocsinh a = timHSG(danhSachHocsinh, 4);
	printf("Hoc sinh co GPA cao nhat: %s", a.ten);
	return 0;
}