#include <iostream>
#include <math.h>

class PTBac2
{
private:
	float a; 
	float b; 
	float c; 
public:
	PTBac2(float a, float b, float c)
	{
		this->a = a; 
		this->b = b; 
		this->c = c; 
	}
	PTBac2()
	{
		this->a = 0; 
		this->b = 0; 
		this->c = 0; 
	}

	void get_result();
};

void PTBac2::get_result()
{
	if (a == 0 && b == 0)
	{
		if (c == 0)
		{
			printf("Phuong trinh co vo so nghiem\n");
		}
		else 
		{
			printf("Phuong trinh vo nghiem\n");
		}
		return; 
	}
	float delta = pow(b, 2) - (4 * a * c);
	if (delta < 0)
	{
		printf("Phuong trinh vo nghiem\n"); 
	}
	else if (delta == 0)
	{
		float x = -b / (2 * a); 
		printf("Phuong trinh co nghiem kep:\nx1 = x2 = %.2f\n", x);
	}
	else
	{
		float x1 = (-b - sqrt(delta)) / (2 * a); 
		float x2 = (-b + sqrt(delta)) / (2 * a); 
		printf("Phuong trinh co 2 nghiem phan biet:\nx1 = %.2f, x2 = %.2f\n", x1, x2); 
	}
}

int main()
{
	PTBac2 fx(1, -5, 0); 
	fx.get_result();
	return 0; 
}