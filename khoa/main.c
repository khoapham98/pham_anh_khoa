#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, c;
	printf("ax^2 + bx + c = 0\n");
	printf("a = ");
	scanf_s("%f", &a);
	printf("b = ");
	scanf_s("%f", &b);
	printf("c = ");
	scanf_s("%f", &c);

	float del = pow(b, 2) - (4 * a * c);
	if (del > 0)
	{
		float x1, x2;
		x1 = (-b + sqrt(del)) / (2 * a);
		x2 = (-b - sqrt(del)) / (2 * a);
		printf("x1 = %.3f \nx2 = %.3f", x1, x2);
	}
	else if (del == 0)
	{
		float x = -b / (2 * a);
		printf("x1 = x2 = %.3f", x);
	}
	else
	{
		printf("Phuong trinh vo nghiem");
	}

	return 0;
}