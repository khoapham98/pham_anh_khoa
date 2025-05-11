#include "hinh_hoc.h"

int main()
{
    mang_int a(5); 
    for (int i = 0; i < a.size; i++)
    {
        a[i] = i + 1;
    }

    printf("Truoc khi them (size = %d): \n", a.size);
    for (int i = 0; i < a.size; i++)
    {
        printf("%d ", a[i]);
    }

    a.themPhanTu(6, 2); 
    printf("\nSau khi them phan tu (size = %d): \n", a.size);
    for (int i = 0; i < a.size; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}