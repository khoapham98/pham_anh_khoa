#include <stdio.h>
#include "hinh_hoc.h"

int main()
{
    phan_so a = { 5, 3 };
    phan_so b = { 4, 2 };

    phan_so kq = a * b;
    printf("%d/%d * ", a.tu, a.mau);
    printf("%d/%d = ", b.tu, b.mau);
    printf("%d/%d\n", kq.tu, kq.mau);

    kq = a + b;
    printf("%d/%d + ", a.tu, a.mau);
    printf("%d/%d = ", b.tu, b.mau);
    printf("%d/%d\n", kq.tu, kq.mau);
    return 0;
}