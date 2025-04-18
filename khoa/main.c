#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef enum
{
	NAM, 
	NU
} sex_t;

typedef struct
{
	char ten[50];
	int tuoi;
	sex_t gioitinh;
	float diemtoan;
	float diemvan;
	float DTB;
} hocsinh_t;

void inHocsinh(hocsinh_t* ds, int size);
void file_to_string(FILE* file, char** str);
void string_to_hocsinh(char** s, hocsinh_t* ds);
void tinhDTB(hocsinh_t* ds, int size);

int main()
{
	FILE* fptr = fopen("D:/workspace/C/imic/practices/DanhSachHocSinh1.csv", "r+");

	char* arr[5];
	hocsinh_t ds[5] = { 0 };

	file_to_string(fptr, arr);

	string_to_hocsinh(arr, ds);

	tinhDTB(ds, 5);

	return 0;
}

void inHocsinh(hocsinh_t* ds, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d. ten : %s, ", i + 1, ds[i].ten);
		printf("tuoi : %d, ", ds[i].tuoi);
		printf("gioi tinh: %d, ", ds[i].gioitinh);
		printf("diem toan : %.2f, ", ds[i].diemtoan);
		printf("diem van : %.2f, ", ds[i].diemvan);
		printf("DTB: %.2f\n", ds[i].DTB);
	}
}

void file_to_string(FILE* file, char** str)
{
	char tmp[50];

	for (int i = 0; i < 5; i++)
	{
		fgets(tmp, 50, file);
		str[i] = malloc(strlen(tmp) + 1);
		if (str[i] != NULL)
		{
			strcpy(str[i], tmp);
		}
	}
}

void string_to_hocsinh(char** s, hocsinh_t* ds)
{
	for (int i = 0; i < 5; i++)
	{
		int cnt = 0;
		char name[50] = { 0 };
		char gioitinh[4] = { 0 };
		int age = 0;
		float diemtoan = 0, diemvan = 0;
		int size = strlen(s[i]);

		for (int j = 0; j < size; j++)
		{

			switch (cnt)
			{
			case 0:
				while (s[i][j] != ',')
				{
					name[j] = s[i][j];
					j++;
				}
				strcpy(ds[i].ten, name);
				cnt++;
				break;

			case 1:
				while (s[i][j] != ',')
				{
					if (s[i][j + 1] == ',')
					{
						age += (s[i][j++] - 48);
					}
					else
					{
						age += (s[i][j++] - 48) * 10;
					}
				}
				ds[i].tuoi = age;
				cnt++;
				break;

			case 2:
				int k = 0;
				while (s[i][j] != ',')
				{
					gioitinh[k++] = s[i][j++];
				}

				if (strcmp(gioitinh, "NAM") == 0)
				{
					ds[i].gioitinh = NAM;
				}
				else
				{
					ds[i].gioitinh = NU;
				}
				cnt++;
				break;

			case 3:
				while (s[i][j] != ',')
				{
					if (s[i][j + 1] == ',')
					{
						diemtoan += (s[i][j++] - 48);
					}
					else
					{
						diemtoan += (s[i][j++] - 48) * 10;
					}
				}
				ds[i].diemtoan = diemtoan;
				cnt++;
				break;

			case 4:
				while (s[i][j] != ',' && s[i][j] != '\n')
				{
					if (s[i][j + 1] < '0' || s[i][j + 1] > '9')
					{
						diemvan += (s[i][j++] - 48);
					}
					else
					{
						diemvan += (s[i][j++] - 48) * 10;
					}
				}
				ds[i].diemvan = diemvan;
				cnt++;
				break;

			default:
				break;
			}
		}
	}
}

void tinhDTB(hocsinh_t* ds, int size)
{
	int max = 0;
	int index = 0;
	for (int i = 0; i < size; i++)
	{
		ds[i].DTB = (ds[i].diemtoan + ds[i].diemvan) / 2;
		if (ds[i].DTB > max)
		{
			max = ds[i].DTB;
			index = i;
		}
	}

	printf("Hoc sinh co DTB cao nhat la : \n");
	inHocsinh(&ds[index], 1);
}