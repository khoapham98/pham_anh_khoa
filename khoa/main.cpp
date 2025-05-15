#include <stdio.h>
#include <stdlib.h>
#include <iostream>

template <class T, int num_item = 0>

class mang
{
public:
    T* ptr;
    int size;

    mang(int so_luong)
    {
        size = so_luong;
        ptr = (T*)malloc(sizeof(T) * size);
        if (ptr == NULL)
        {
            throw std::runtime_error("Khong the cap phat vung nho");
        }
    }

    mang(std::initializer_list<T> init)
    {
        size = init.size();
        ptr = (T*)malloc(sizeof(T) * size);
        int i = 0;
        for (auto item : init)
        {
            ptr[i++] = item;
        }
    }

    ~mang()
    {
        free(ptr);
        printf("\nVung nho da duoc giai phong!\n");
    }

    int& operator[](int index)
    {
        return ptr[index];
    }
};

int main()
{
    mang<int, 3> arr = { 1,2,3 };

    int x = arr[2];

    printf("%d", x);
    return 0;
}