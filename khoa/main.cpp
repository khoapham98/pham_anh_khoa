#include "hinh_hoc.h"

int main()
{
    mang_int a(10); 
    for (int i = 0; i < a.size; i++)
    {
        a[i] = i + 1;
    }

    printf("Truoc khi xoa (size = %d): \n", a.size);
    for (int i = 0; i < a.size; i++)
    {
        printf("%d ", a[i]);
    }

    a.xoaPhanTu(12); 
    printf("\nSau khi xoa (size = %d): \n", a.size); 
    for (int i = 0; i < a.size; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}