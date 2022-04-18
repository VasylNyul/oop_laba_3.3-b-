#include "Fraction.h"

int main()
{
	Fraction f1, f2(999, 99), f4;

	cin >> f1;
	cin >> f4;

	cout << "f1 :" << f1 << endl;
	cout << "f4 :" << f4 << endl;

	cout << "f2 = " << f2 << endl;
	cout << ++f2 << endl;
	cout << --f2 << endl;
	cout << f2++ << endl;
	cout << f2-- << endl;

	cout << "Sub = " << f1 - f4 << endl;

	int f;
	f = f1 < f4;
	cout << "f1 <  f4 - " << f << endl;
	f = f1 == f4;
	cout << "f1 == f4 - " << f << endl;
	f = f1 > f4;
	cout << "f1 >  f4 - " << f << endl;
	f = f1 <= f4;
	cout << "f1 <= f4 - " << f << endl;
	f = f1 != f4;
	cout << "f1 != f4 - " << f << endl;
	f = f1 >= f4;
	cout << "f1 >= f4 - " << f << endl;

	return 0;
}