#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "mylib.h"

typedef struct
{
	int tu;
	int mau;
} phanSo;

int findMin(phanSo x)
{
	if (abs(x.tu) < abs(x.mau))
	{
		return abs(x.tu);
	}
	else
	{
		return abs(x.mau);
	}
}

phanSo rutGon(phanSo x)
{
	for (int i = findMin(x); i > 0; i--)
	{
		if ((x.tu % i == 0) && (x.mau % i == 0))
		{
			phanSo res;
			res.tu = x.tu / i;
			res.mau = x.mau / i;

			if (res.tu > 0 && res.mau < 0)
			{
				res.tu = -res.tu;
				res.mau = abs(res.mau);
			}
			else if (res.tu < 0 && res.mau < 0)
			{
				res.tu = abs(res.tu);
				res.mau = abs(res.mau);
			}

			return res;
		}
	}
}

int main()
{
	phanSo a = { 1000000, -250000};
	phanSo res = rutGon(a);

	printf("Phan so : %d/%d\nRut gon : %d/%d", a.tu, a.mau, res.tu, res.mau);

	return 0;
}