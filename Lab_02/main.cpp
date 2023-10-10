/*
   Lab_02.cpp
   Кархут Дем'ян
   Лабораторна робота № 2.
   Лінійні програми.
   Варіант 12
*/

#include <iostream>
#define PI 3.141592653589793238
using namespace std;

int main()
{
	double x;
	double z1;
	double z2;
	
	cout << "added message";
	cout << "Enter x: ";
	cin >> x;

	z1 = (sin(4 * x) / (1 + cos(4 * x))) * (cos(2 * x) / (1 + cos(2 * x)));
	z2 = 1 / tan(3 * PI / 2 - x);

	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;

	return 0;
}