#include <stdio.h>
#include <math.h>

int ControlServo();
int elevator();
float estimateKm();
int calculateKm();
int getlen(char* str);
void menu();

int main()
{
	int choice;
	int check = 1;

	menu();
	while (check == 1)
	{
		printf("Enter feature: ");
		scanf_s("%d", &choice);

		switch (choice)
		{
		case 1:
			int angle = ControlServo();
			printf("Servo angle : %d\n", angle);
			break;
		case 2:
			int power = elevator();
			if (power == -1)
			{
				printf("WARNING : OVERWEIGHT !!!\n");
			}
			else
			{
				printf("Power needed for elevator: %dW\n", power);
			}
			break;
		case 3:
			float y = estimateKm();
			printf("The estimate km that the car can go : %.2f\n", y);
			break;
		case 4:
			int km = calculateKm();
			printf("The actual km that the car can go: %d\n", km);
			break;
		default:
			check = 0;
			break;
		}
	}
}

void menu()
{
	printf("===== MENU =====\n");
	printf("1. Control your servo\n");
	printf("2. Calculate power needed for elevator\n");
	printf("3. Estimate the km that can go\n");
	printf("4. Calculate the actual km that can go\n");
}

int ControlServo()
{
	float level;

	do
	{
		printf("Enter level : ");
		scanf_s("%f", &level);
	} while (level > 10 || level < 0);

	int servo_angle;
	int nguyen = level;
	float thapPhan = level - nguyen;

	servo_angle = nguyen * 18 + thapPhan * 18;
	return servo_angle;
}

int elevator()
{
	int recent, next, weight;
	printf("Recent floor: ");
	scanf_s("%d", &recent);
	printf("The floor needs: ");
	scanf_s("%d", &next);
	printf("weight: ");
	scanf_s("%d", &weight);

	if (weight > 700)
	{
		return -1;
	}
	else if (recent < next)
	{
		int watt = 10;
		int tmp = next - recent;
		int res = tmp * (weight * watt);
		return res;
	}
	else if (recent > next)
	{
		int watt = 2;
		int tmp = recent - next;
		return tmp * (weight * watt);
	}
	else
	{
		return 0;
	}
}

float estimateKm()
{
	int pin, k;
	printf("Pin : ");
	scanf_s("%d", &pin);
	printf("k : ");
	scanf_s("%d", &k);

	switch (k)
	{
	case 1:
		return (float)5 * pin;
	case 2:
		return (float)4 * pin;
	case 3:
		return 2.15 * (float)pin;
	case 4:
		return 3.3 * pin;
	default:
		break;
	}
}

int getlen(char* str)
{
	int i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return i;
}

int calculateKm()
{
	char str[1000];

	printf("Enter km of the journey: ");
	getchar();
	gets(str);

	int km = 0;
	int pin = 100;
	int pinUse = 0;
	int size = getlen(str);
	int i = 0;

	while (i < size)
	{
		int num = 0;
		int cnt = 0;
		int am = 0;
		while (str[cnt + i] != ' ' && str[cnt + i] != 0)
		{
			if (str[cnt + i] == '-')
			{
				am = 1;
				cnt++;
				continue;
			}

			if (cnt > 0)
			{
				num *= 10;
			}
			num += str[cnt + i] - 48;
			cnt++;
		}

		if (num == 0)
		{
			pin += 25;
		}
		else if (am == 1)
		{
			pin += (num / 10);
			if (pin > 100)
			{
				pin = 100;
			}
			km += num;
		}
		else
		{
			pinUse = round(num / 2.15);

			if (pinUse >= pin)
			{
				km += pin * 2.15;
				pin = 0;
			}
			else
			{
				km += num;
				pin -= pinUse;
			}
		}

		i += cnt;
		i++;
	}

	return km;
}