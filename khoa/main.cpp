#include <stdio.h>
#include "hinh_hoc.h"

int main()
{
    phan_so a(2, 3);
    phan_so b(1, 4);
    phan_so c(6, 32); 

    printf("%d/%d\n", c.tu, c.mau); 
    printf("%d/%d + %d/%d = %d/%d\n", a.tu, a.mau, b.tu, b.mau, (a + b).tu, (a + b).mau);

    printf("%d/%d - %d/%d = %d/%d\n", a.tu, a.mau, b.tu, b.mau, (a - b).tu, (a - b).mau);

    printf("%d/%d * %d/%d = %d/%d\n", a.tu, a.mau, b.tu, b.mau, (a * b).tu, (a * b).mau);

    printf("%d/%d : %d/%d = %d/%d\n", a.tu, a.mau, b.tu, b.mau, (a / b).tu, (a / b).mau);

    return 0;
}