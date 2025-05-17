#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

enum gioitinh_e
{
	NU, NAM
};

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
	string get_gioi_tinh() { return gioitinh == NAM ? "Nam" : "Nu"; }
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
	float get_dtb() { return (this->diemtoan + this->diemvan) / 2; }
	string get_xep_loai()
	{
		float res = get_dtb();
		if (res > 8)
		{
			return "Gioi";
		}
		else if (res >= 6.5)
		{
			return "Kha";
		}
		else if (res >= 5)
		{
			return "Trung binh";
		}
		else
		{
			return "Yeu";
		}
	}
};

class GiaoVien : public ThongTinCaNhan
{
private: 
	float bacluong; 
public: 

};

int main()
{
	HocSinh A; 
	A.set_diem_toan(6); 
	A.set_diem_van(8);

	cout << A.get_xep_loai();
	return 0; 
}












