#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

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
	HocSinh(string ten, int tuoi, gioitinh_e gt, float diemtoan, float diemvan)
	{
		this->set_ten(ten);
		this->set_tuoi(tuoi);
		this->set_gioi_tinh(gt);
		this->diemtoan = diemtoan;
		this->diemvan = diemvan;
	}

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
	vector<HocSinh> dshs = {
		{"Pham Anh Khoa", 21, NAM, 8, 9},
		{"Tommy", 21, NAM, 6, 7} };

	for (int i = 0; i < 2; i++)
	{
		cout << i + 1 << ". " << dshs[i].get_ten() << "," << dshs[i].get_tuoi() << "," << dshs[i].get_gioi_tinh() << "," << dshs[i].get_dtb() << endl;
	}
	return 0; 
}









