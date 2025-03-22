#include <stdio.h>
#include "mylib.h"

int main()
{
	char str[] = "I Love c programming";
	char substr[] = "programming";



	int i = 0;
	while (*(str + i) != 0)
	{
		printf("%c = %p\n",*(str + i), str + i);
		i++;
	}
	char* C_address = findCh(str, 'c');
	printf("Address of 'c' : %p", C_address);
	//char* sub_address = findSubstr(str, substr);
	return 0;
}