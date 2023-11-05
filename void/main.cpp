#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int a, b;
	float h;

	cout << "Enter a: ";
	cin >> a;

	cout << "Enter b: ";
	cin >> b;

	cout << "Enter h: ";
	cin >> h;

	float x = a, y;

	/*do
	{
		y = tan(pow(x, 3)) + (2 * sin(x) - 3);
		cout << "X= " << x << "\n" << "Y= " << y << endl;

		x += h;
	} while (x <= b);*/

	while (x <= b)
	{
		y = tan(pow(x, 3)) + (2 * sin(x) - 3);
		cout << "X= " << x << "\n" << "Y= " << y << endl;

		x += h;
	}

	return 0;
}