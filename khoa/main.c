#include <stdio.h>
#include "mylib.h"

int main()
{
	char str[] = "I Love C programming !!!";

	uppercase(str);

	printf("%s", str);

	return 0;
}