#include "hinh_hoc.h"

void phan_so::rutgon()
{
	for (int i = tu; i > 0; i--)
	{
		if (tu % i == 0 && mau % i == 0)
		{
			tu /= i;
			mau /= i;
			return;
		}
	}
	return;
}

phan_so phan_so::operator+(phan_so b)
{
	phan_so res;
	if (mau == b.mau)
	{
		res.tu = tu + b.tu;
		res.mau = mau; 
	}
	else
	{
		res.tu = (tu * b.mau) + (b.tu * mau); 
		res.mau = mau * b.mau;
	}
	res.rutgon(); 
	return res;
}

phan_so phan_so::operator-(phan_so b)
{
	phan_so res;
	if (mau == b.mau)
	{
		res.tu = tu - b.tu;
		res.mau = mau;
	}
	else
	{
		res.tu = (tu * b.mau) - (b.tu * mau);
		res.mau = mau * b.mau;
	}
	res.rutgon();

	return res;
}
phan_so phan_so::operator*(phan_so b)
{
	phan_so res; 
	res.tu = tu * b.tu;
	res.mau = mau * b.mau;
	res.rutgon();

	return res;
}

phan_so phan_so::operator/(phan_so b)
{
	phan_so res;
	res.tu = tu * b.mau;
	res.mau = mau * b.tu;
	res.rutgon();

	return res;
}

bool phan_so::operator>(phan_so b)
{
	if (((float)tu/mau) > ((float)b.tu/b.mau))
	{
		return true; 
	}
	else
	{
		return false; 
	}
}

bool phan_so::operator<(phan_so b)
{
	if (((float)tu / mau) < ((float)b.tu / b.mau))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool phan_so::operator>=(phan_so b)
{
	if (((float)tu / mau) >= ((float)b.tu / b.mau))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool phan_so::operator<=(phan_so b)
{
	if (((float)tu / mau) <= ((float)b.tu / b.mau))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool phan_so::operator==(phan_so b)
{
	if (((float)tu / mau) == ((float)b.tu / b.mau))
	{
		return true;
	}
	else
	{
		return false;
	}
}

int& mang_int::operator[](int index)
{
	return ptr[index]; 
}

void mang_int::xoaPhanTu(int index)
{
	if (index > size - 1)
	{
		printf("\nPhan tu khong ton tai\n"); 
		return; 
	}
	int newSize = size - 1; 
	int* tmp_ptr = (int*)malloc(sizeof(int) * newSize);

	for (int i = 0, j = 0; i < newSize; i++, j++)
	{
		if (j != index)
		{
			tmp_ptr[i] = ptr[j]; 

		}
		else
		{
			tmp_ptr[i] = ptr[++j]; 
		}
	}
	ptr = tmp_ptr; 
	size = newSize; 
}
