#include <iostream>
using namespace std;
void main()
{
	double c;
	cout << "Please enter a Celsius value:" << endl;
	cin >> c;
	double f = 1.8 * c + 32;
	cout << c << " degrees Celsius is " << f << " degrees Fahrenheit" << endl;
}