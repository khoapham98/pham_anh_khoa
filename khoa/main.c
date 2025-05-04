#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <string.h>

#include <stdio.h>
#include <string.h> 
#include <stdlib.h>


char* convertToTitle(int columnNumber) {
    char ch[] = { 0 , 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
                 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q',
                 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };

    int num = columnNumber;

    char* str = (char*)calloc(sizeof(char), 10);

    int i = 9;
    int time = 26;
    while (num > 0)
    {
        int du = num % 26;
        if (du == 0)
        {
            du = 26; 
            num = num / 26 - 1; 
        }
        else
        {
            num /= 26;
        }
        str[--i] = ch[du];
    }

    str += i;
    return str;
}
int main()
{
    char* res = convertToTitle(702);

    printf("%s\n", res);

    return 0;
}