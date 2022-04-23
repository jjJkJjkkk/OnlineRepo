#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	//changes in online repo
	//çì³íà êîäó
	double l, T;
	const double PI = 3.14159;
	const double g = 9.8;
	cout << "T = 2*PI*((l/g)^(0.5))" << endl;
	cout << "g = 9.8" << endl;
	cout << "PI = 3.14159" << endl;
	cout << "Enter the length (l): ";
	cin >> l;
	if (l < 0) {
		cout << "The number entered cannot be a length, enter a positive number: ";
		cin >> l;
		T = (2 * (PI) * (sqrt(l / g)));
		cout << "T = " << T << endl;
	}
	else {T = (2 * (PI) * (sqrt(l / g)));
		cout << "T = " << T << endl;
	}
	return 0;
}
