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