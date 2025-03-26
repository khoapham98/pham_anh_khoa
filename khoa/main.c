#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "mylib.h"

typedef struct
{
	int tu;
	int mau;
} phanSo;

phanSo congPhanSo(phanSo x, phanSo y)
{
	phanSo res;
	res.tu = x.tu + y.tu;
	res.mau = x.mau + y.mau;

	return res;
}

phanSo truPhanSo(phanSo x, phanSo y)
{
	phanSo res;
	res.tu = x.tu - y.tu;
	res.mau = x.mau - y.mau;

	return res;
}

phanSo nhanPhanSo(phanSo x, phanSo y)
{
	phanSo res;
	res.tu = x.tu * y.tu;
	res.mau = x.mau * y.mau;

	return res;
}

phanSo chiaPhanSo(phanSo x, phanSo y)
{
	phanSo res;
	res.tu = x.tu * y.mau;
	res.mau = x.mau * y.tu;

	return res;
}

int main()
{
	phanSo a = { 1, 3 }, b = { 4, 5 };

	printf("Tong: %d/%d\n", congPhanSo(a, b).tu, congPhanSo(a, b).mau);
	printf("Hieu: %d/%d\n", truPhanSo(a, b).tu, truPhanSo(a, b).mau);
	printf("Tich: %d/%d\n", nhanPhanSo(a, b).tu, nhanPhanSo(a, b).mau);
	printf("Thuong: %d/%d\n", chiaPhanSo(a, b).tu, chiaPhanSo(a, b).mau);
	
	return 0;
}