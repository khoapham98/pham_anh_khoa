#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef union
{
	int data;
	struct byte
	{
		char LSB;
		char byte_1;
		char byte_2;
		unsigned char MSB;
	};
} wav_t;

int main()
{
	FILE* fptr = fopen("D:/workspace/C/imic/practices/audio.wav", "r");
	
	if (fptr == NULL)
	{
		printf("Khong the mo file!");
		return 1; 
	}

	char str[44];
	fgets(str, 44, fptr);

	wav_t kichthuoc = { 0 };
	kichthuoc.LSB = str[4];
	kichthuoc.byte_1 = str[5];
	kichthuoc.byte_2 = str[6];
	kichthuoc.MSB = str[7];

	wav_t rate = { 0 };
	rate.LSB = str[24];
	rate.byte_1 = str[25];
	rate.byte_2 = str[26];
	rate.MSB = str[27];

	printf("Kich thuoc cua file: %d bytes\n", kichthuoc.data);
	printf("Audio sample rate cua file: %d kHz\n", rate.data);

	fclose(fptr);
	return 0;
}