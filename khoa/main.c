#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <string.h>

#define a 4
#define b 5

int print(char* s)
{
    printf("%s", s); 
}

int main()
{
#if a < b
    print("a nho hon b");
#elif a > b
    print("a lon hon b");
#else
    print("a bang b");
#endif
    return 0;
}