#include <stdio.h>
#include <stdlib.h>
#include "hinh_hoc.h"


int main()
{

    for (int i = 0; i < a.size; i++)
    {
        a[i] = i + 1; 
    }
    
    for (int i = 0; i < a.size; i++)
    {
        printf("%d ", a.ptr[i]);
    }

    return 0;
}