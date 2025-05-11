#include <stdio.h>
#include "hinh_hoc.h"

int main()
{
    phan_so a(2, 3);
    phan_so b(1, 3);
    phan_so c(4, 4);
    phan_so d(8, 8); 

    if (a > b)
    {
        printf("Phan so a lon hon phan so b\n"); 
    }
    else if (a < b)
    {
        printf("Phan so a nho hon phan so b\n"); 
    }

    if (c >= d)
    {
        printf("Phan so c lon hon hoac bang phan so d\n"); 
    }
    else if (c <= d)
    {
        printf("Phan so c nho hon hoac bang phan so d\n"); 
    }

    return 0;
}