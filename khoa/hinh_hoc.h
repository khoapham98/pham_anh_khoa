#include <stdlib.h>
#include <stdio.h>
#include <iostream>

class phan_so
{
public:
    int tu;
    int mau; 

    phan_so()
    {
        tu = 0; 
        mau = 0;
    }
    phan_so(int a, int b)
    {
        tu = a;
        mau = b;
        rutgon();
    }

    void rutgon();
    phan_so operator+(phan_so b);
    phan_so operator-(phan_so b);
    phan_so operator*(phan_so b);
    phan_so operator/(phan_so b);
    bool operator>(phan_so b);
    bool operator<(phan_so b);
    bool operator>=(phan_so b);
    bool operator<=(phan_so b);
    bool operator==(phan_so b);
};

class mang_int
{
public: 
    int* ptr; 
    int size; 

    mang_int(int so_luong)
    {
        size = so_luong;
        ptr = (int*) calloc(sizeof(int), size); 
        if (ptr == NULL)
        {
            throw std::runtime_error("Khong the cap phat vung nho");
        }
    }

    ~mang_int()
    {
        free(ptr); 
        printf("\nVung nho da duoc giai phong!\n"); 
    }

    int& operator[](int index);
};