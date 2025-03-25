#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "mylib.h"

typedef struct
{
	int tu;
	int mau;
} phan_so;

phan_so nhan_2_phan_so(phan_so a, phan_so b)
{
	phan_so res;
	res.tu = a.tu * b.tu;
	res.mau = a.mau * b.mau;

	return res;
}

phan_so findMax(phan_so* ptr, int size)
{
	float max = ptr->tu / ptr->mau;
	int index = 0;

	for (int i = 1; i < size; i++)
	{
		float tmp = ptr[i].tu / (float) ptr[i].mau;
		if (tmp > max)
		{
			max = tmp;
			index = i;
		}
	}
	phan_so res = ptr[index];

	return res;
}

int main()
{
	phan_so arr[] = { {1,2}, {2,3}, {3,4}, {4,5}, {5,6} };

	phan_so kq = findMax(arr, 5);
	printf("Phan so lon nhat: %d/%d", kq.tu, kq.mau);

	return 0;
}