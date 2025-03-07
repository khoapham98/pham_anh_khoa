#include <stdio.h>
#include <math.h>
int main()
{
	float gpa;
	printf("Enter student's GPA: ");
	scanf_s("%f", &gpa);

	if (gpa >= 8)
	{
		printf("GIOI\n");
	}
	else if (gpa >= 6.5)
	{
		printf("KHA\n");
	}
	else if (gpa >= 5.0)
	{
		printf("TRUNG BINH\n");
	}
	else
	{
		printf("YEU\n");
	}

	return 0;
}