// Integrallll.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <windows.h>
#include <conio.h>
#include <iostream>
#include <math.h>
using namespace std;

double f(double x)
{
	return x*x ;
}
void main()
{
	double a = 0, b = 50, n = 10, h, s, e, s1 = 0, x;
	int i;
	cout << "e=";
	cin >> e;
	h = (b - a) / n;
	do
	{
		s = 0;
		s1 = s;
		for (i = 1; i <= n; i++)
		{
			x = a + (i - 1 / 2)*h;
			s = s + f(x);
		}
		s = s*h;
		n = n * 2;
		h = h / 2;

	} while (fabs(s1 - s)<15 + e);
	cout << "\n" << "I=" << s;

	_getch();
}
/*#include <iostream>

using namespace std;


double f(double x)
{
	return x*x;
}


int main()
{
	double a, b;
	int n;
	double INTGRL = 0;

	cin >> a >> b >> n;

	double h = double((b - a)/n);
	cout << h << endl;
	for (double x = 0; x < n ; x++) 
	{
		INTGRL += f(a + h*(x + 0.5));
		cout << "|-|" << INTGRL << endl ;
	}
	double INtg = ((2*(b - a)*(h*h))/24) + 1e-12;
	INTGRL *= h;
	
	cout << INTGRL << endl;
	cout << INtg << endl;
	system("pause");
	return 0;
	
}*/