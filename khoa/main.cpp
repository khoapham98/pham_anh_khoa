#include <stdio.h>

void printByteVal(short val)
{
	unsigned char* ptr = (unsigned char*)&val;
	printf("High byte: \nDec = %d, Hex = 0x%02X\n", *(ptr + 1), *(ptr + 1));
	printf("Low byte: \nDec = %d, Hex = 0x%02X\n", *ptr, *ptr);
}

int main()
{
	printByteVal(1234); 

	return 0; 
}