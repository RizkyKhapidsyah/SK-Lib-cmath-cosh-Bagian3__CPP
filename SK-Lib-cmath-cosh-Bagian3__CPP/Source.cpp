// CPP program to demonstrate the
// cosh() function
#include <iostream>
#include <cmath>
#include <conio.h>

/*	Source by GeeksForGeeks
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019
*/

using namespace std;

int main() {
	int x = -4;
	double result;

	result = cosh(x);
	cout << "cosh(-4) = " << result << endl;

	// x in Degrees
	double xDegrees = 90;
	x = xDegrees * 3.14159 / 180;

	result = cosh(x);
	cout << "cosh(90 degrees) = " << result << endl;

	_getch();
	return 0;
}
