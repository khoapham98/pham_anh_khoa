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
	float bac_luong;
public: 
	void set_bac_luong(float bac_luong) { this->bac_luong = bac_luong; }
	float get_bac_luong() { return this->bac_luong; }
};

int main()
{
	HocSinh A; 
	A.set_ten("Pham Anh Khoa");
	A.set_diem_toan(6); 
	A.set_diem_van(8);

	GiaoVien B;
	B.set_ten("Nguyen Thi B");
	B.set_bac_luong(1.4);

	cout << "Ten giao vien: " << B.get_ten() << ", bac luong: " << B.get_bac_luong() << endl;

	cout << "Ten hoc sinh: " << A.get_ten() << ", xep loai: " << A.get_xep_loai() << endl;
	return 0; 
}












