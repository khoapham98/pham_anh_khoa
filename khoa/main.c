#include <stdio.h>

typedef enum
{
	NAM,
	NU
} gioi_tinh_t;
char* gioitinh_to_string[] = { "Nam", "Nu" };

typedef enum
{
	GIOI,
	KHA,
	TRUNG_BINH,
	YEU
} loai_t;
char* loai_to_string[] = { "Gioi", "Kha", "Trung binh", "Yeu"};

typedef struct
{
	char* ten;
	int tuoi;
	gioi_tinh_t gioi_tinh;
	float diem_toan;
	float diem_van;
	loai_t loai;
} hoc_sinh_t;

void xep_loai(hoc_sinh_t* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		float res = (arr[i].diem_toan + arr[i].diem_van) / 2;
		if (res >= 8)
		{
			arr[i].loai = GIOI;
		}
		else if (res >= 6.5)
		{
			arr[i].loai = KHA;
		}
		else if (res >= 5)
		{
			arr[i].loai = TRUNG_BINH;
		}
		else
		{
			arr[i].loai = YEU;
		}
	}
}

void in_thong_tin(hoc_sinh_t* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d. ten: %s, tuoi: %d, ", i + 1, arr[i].ten, arr[i].tuoi );
		printf("gioi tinh: %s, ", gioitinh_to_string[arr[i].gioi_tinh]);
		printf("diem toan : % .2f, diem van : % .2f, ", arr[i].diem_toan, arr[i].diem_van);
		printf("xep loai: %s\n", loai_to_string[arr[i].loai]);
	}
}

int main()
{
	hoc_sinh_t danhsach[] = {	{"Nguyen Van A", 18, NAM, 8.5, 8.7},
								{"Tommy Guy", 18, NAM, 7.5, 7.8},
								{"Nguyen Thi B", 18, NU, 6.5, 5.6} };

	xep_loai(danhsach, 3);
	in_thong_tin(danhsach, 3);
	return 0;
}