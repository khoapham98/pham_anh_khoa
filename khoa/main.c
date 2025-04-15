#include <stdio.h>
#include <Windows.h>
#include <math.h>

typedef float (*pf)(float);

float fx(float x)
{
	return x * x;
}

float gx(float x)
{
	return 2 * x * x + 3 * x;
}

float tx(float x)
{
	return sin(x) + 1;
}

float tinhTichPhan(int a, int b, pf pfunc)
{
	float h = (b - a) / 1000.0;
	float s = 0;
	for (int i = 0; i < 1000; i++)
	{
		float db = pfunc(a + i * h);
		float dl = pfunc(a + (i * h) * h);
		s += ((dl + db) / 2) * h;
	}
}

int main()
{
	float res = tinhTichPhan(2, 3, tx);

	printf("KQ = %.3f", res);

	return 0;
}