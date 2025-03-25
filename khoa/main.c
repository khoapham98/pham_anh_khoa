#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "mylib.h"

struct phan_so
{
	int tu;
	int mau;
};

struct phan_so nhan_2_phan_so(struct phan_so a, struct phan_so b)
{
	struct phan_so res;
	res.tu = a.tu * b.tu;
	res.mau = a.mau * b.mau;

	return res;
}

int main()
{
	struct phan_so A;
	struct phan_so B;

	A.tu = 1;
	A.mau = 2;

	B.tu = 2;
	B.mau = 3;

	struct phan_so kq;
	kq = nhan_2_phan_so(A, B);

	printf("KET QUA : %d/%d", kq.tu, kq.mau);
	return 0;
}