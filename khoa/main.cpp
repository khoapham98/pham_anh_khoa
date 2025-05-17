#include <iostream>
#include <string>
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
	int get_gioi_tinh() { return this->gioitinh; }
};



int main()
{

	return 0; 
}