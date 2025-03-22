#include <stdio.h>
#include "mylib.h"

int main()
{
	char str[] = "pham anh Khoa";

	char* ptr = CharAddress(str, 'a');
	printf("%p", ptr);
	  
	return 0;
}