// Lab_04.3.cpp
// Стеців Максим Любомирович
// Лабораторна робота № 04.3
// Табуляція функції, заданої формулою: функція з параметрами
// Варіант 15
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, R1, R2, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "R1 = "; cin >> R1;
	cout << "R2 = "; cin >> R2;
	
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "dx" << "     |"
		<< setw(7) << "y" << "       |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x <= -6)
			y = R2 / 2;
		else
			if (-6 < x && x <= -2 * R2)
				y = R2 / 2 - (R2 * x - 6 * R2) / 2 * (-2 * R2 - 6);
			else
				if (-2 * R2 < x && x <= 0)
					y = sqrt(-R2 * -R2 - x * x - 2 * x * R2 - R2 * R2);
				else
					if (0 < x && x <= 2 * R1)
						y = -1 * sqrt(R1 * R1 - x * x + 2 * x * R1 - R1 * R1);
					else
						y = -R1 * x + 2 * R1 * R1;

		
		cout << "|" << setw(7) << setprecision(2) << dx
			<< "   |" << setw(10) << setprecision(3) << y
			<< "    |" << endl;

		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}
