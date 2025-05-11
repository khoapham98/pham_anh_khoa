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
    }

    phan_so operator*(phan_so b);
    phan_so operator+(phan_so b);
    bool operator>(phan_so b);
    bool operator<(phan_so b);
    bool operator>=(phan_so b);
    bool operator<=(phan_so b);
    bool operator==(phan_so b);
};

