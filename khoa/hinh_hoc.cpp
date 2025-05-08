#include "hinh_hoc.h"

phan_so phan_so::operator*(phan_so b)
{
	phan_so res; 
	res.tu = tu * b.tu;
	res.mau = mau * b.mau;

	return res;
}

phan_so phan_so::operator+(phan_so b)
{
	phan_so res;
	res.tu = tu + b.tu;
	res.mau = mau + b.mau;

	return res;
}
