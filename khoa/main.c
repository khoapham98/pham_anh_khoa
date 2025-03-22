#include <stdio.h>
#include "mylib.h"

int main()
{
	char str[] = "     this is     a    string    ";

	printf("Number of words : %d", countWord(str));

	return 0;
}