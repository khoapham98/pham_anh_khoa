#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

enum gioitinh_e
{
	NU, NAM
};

enum xeploai_e
{
	GIOI, 
	KHA, 
	TRUNGBINH, 
	YEU
};
string xeploai[4] = { "Gioi", "Kha", "Trung binh", "Yeu" };

class ThongTinCaNhan
{
private:
	string ten;
	int tuoi;
	gioitinh_e gioitinh; 

public: 
	void set_ten(string ten) { this->ten = ten; }
	void set_tuoi(int tuoi) { this->tuoi = tuoi; }
	void set_gioi_tinh(gioitinh_e gioitinh) { this->gioitinh = gioitinh; }

	string get_ten() { return this->ten; }
	int get_tuoi() { return this->tuoi; }
	int get_gioi_tinh() { return this->gioitinh; }
};

class HocSinh : public ThongTinCaNhan
{
private: 
	float diemtoan; 
	float diemvan; 

public:
	void set_diem_toan(float diemtoan) { this->diemtoan = diemtoan; }
	void set_diem_van(float diemvan) { this->diemvan = diemvan; }

	float get_diem_toan() { return this->diemtoan; }
	float get_diem_van() { return this->diemvan; }

	float get_dtb()
	{
		return (this->diemtoan + this->diemvan) / 2; 
	}

	xeploai_e get_xep_loai()
	{
		float res = get_dtb();
		if (res > 8)
		{
			return GIOI; 
		}
		else if (res >= 6.5)
		{
			return KHA;
		}
		else if (res >= 5)
		{
			return TRUNGBINH;
		}
		else
		{
			return YEU;
		}
	}
};

int main()
{
	HocSinh A; 
	A.set_diem_toan(6); 
	A.set_diem_van(8);

	cout << xeploai[A.get_xep_loai()] << endl;
	return 0; 
}












