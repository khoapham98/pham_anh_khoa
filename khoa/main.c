#include <stdio.h>
#include "mylib.h"

int main()
{
	char str[] = "I Love c programming";

	int x = countSpace(str);
	printf("Number of spaces : %d", x);

	return 0;
}