#include <stdio.h>
#include "mylib.h"

int main()
{
	char str[] = "I Love c programming";

	printf("Number of characters in string : %d", findSize(str));

	return 0;
}