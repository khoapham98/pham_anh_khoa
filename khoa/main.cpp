#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

double divide(double a, double b)
{
	if (b == 0)
	{
		throw -1;
	}
	return a / b;
}

int main()
{
	double res; 
	
	try
	{
		res = divide(5, 0); 
	}

	catch (const exception& e)
	{
		cout << "Error: " << e.what() << endl;
	}

}