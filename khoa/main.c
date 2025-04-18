#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef enum
{
	NAM, 
	NU
} sex_t;
char* gtinh[] = { "NAM", "NU" };

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
void sapxep(hocsinh_t* ds, int size);
void hocsinh_to_file(hocsinh_t* ds, int size, FILE* file);

int main()
{
	FILE* fptr = fopen("D:/workspace/C/imic/practices/DanhSachHocSinh1.csv", "r");

	char* arr[5];
	hocsinh_t ds[5] = { 0 };

	file_to_string(fptr, arr);

	string_to_hocsinh(arr, ds);

	tinhDTB(ds, 5);

	sapxep(ds, 5);

	printf("\nDanh sach hoc sinh co DTB cao den thap : \n");
	inHocsinh(ds, 5);

	fclose(fptr);

	fptr = fopen("D:/workspace/C/imic/practices/DanhSachHocSinh2.csv", "w");

	hocsinh_to_file(ds, 5, fptr);

	fclose(fptr);

	return 0;
}

void inHocsinh(hocsinh_t* ds, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d. ten : %s, ", i + 1, ds[i].ten);
		printf("tuoi : %d, ", ds[i].tuoi);
		printf("gioi tinh: %s, ", gtinh[ds[i].gioitinh]);
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

void sapxep(hocsinh_t* ds, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (ds[j].DTB < ds[j + 1].DTB)
			{
				hocsinh_t tmp = ds[j];
				ds[j] = ds[j + 1];
				ds[j + 1] = tmp;
			}
		}
	}
}

void hocsinh_to_file(hocsinh_t* ds, int size, FILE* tofile)
{
	char age[3] = { 0 };
	char diemtoan[3] = { 0 };
	char diemvan[3] = { 0 };

	for (int i = 0; i < 5; i++)
	{
		int tmpAge = ds[i].tuoi;
		int tmpMath = ds[i].diemtoan;
		int tmpLiter = ds[i].diemvan;

		for (int j = 1; j >= 0; j--)
		{
			age[j] = (tmpAge % 10) + 48;
			tmpAge /= 10;
			diemtoan[j] = (tmpMath % 10) + 48;
			tmpMath /= 10;
			diemvan[j] = (tmpLiter % 10) + 48;
			tmpLiter /= 10;
		}

		fputs(ds[i].ten, tofile);
		fputs(",", tofile);
		fputs(age, tofile);
		fputs(",", tofile);
		fputs(gtinh[ds[i].gioitinh], tofile);
		fputs(",", tofile);
		if (diemtoan[0] == '0')
		{
			fputs(diemtoan + 1, tofile);
		}
		else
		{
			fputs(diemtoan, tofile);
		}
		fputs(",", tofile);

		if (diemvan[0] == '0')
		{
			fputs(diemvan + 1, tofile);
		}
		else
		{
			fputs(diemvan, tofile);
		}
		fputs("\n", tofile);
	}

	printf("\nLuu danh sach vao file thanh cong!\n");
}