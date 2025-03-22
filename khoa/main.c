#include <stdio.h>
#include "mylib.h"

int main()
{
	char str[] = "pham anh Khoa";
	char substr[] = "Khoa";

	char* pos = SubAddress(str, substr);
	printf("%p", pos);

	return 0;
}