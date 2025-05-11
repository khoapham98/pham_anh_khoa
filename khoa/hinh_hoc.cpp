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