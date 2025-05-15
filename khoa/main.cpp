#include <stdlib.h>
#include <iostream>
#include <array>
#include <vector>

typedef enum
{
    NU,
    NAM
} gioitinh;
const char* chuoi[2] = { "NU", "NAM" };

class thongtincanhan
{
public:
    const char* ten;
    int tuoi;
    gioitinh gt;

    void set_ten(const char* name)
    {
        ten = name;
    }

    void get_ten()
    {
        printf("Ten : %s\n", ten);
    }

    void set_tuoi(int age)
    {
        tuoi = age;
    }

    void get_tuoi()
    {
        printf("Tuoi : %d\n", tuoi);
    }

    void set_gioitinh(gioitinh x)
    {
        gt = x;
    }

    void get_gioitinh()
    {
        printf("Gioi tinh : %s\n", chuoi[gt]);
    }
};


int main()
{
    thongtincanhan a;

    a.set_ten("Pham Anh Khoa");
    a.set_tuoi(18);
    a.set_gioitinh(NAM);

    a.get_ten();
    a.get_tuoi();
    a.get_gioitinh();

    return 0;
}