#include <iostream>
using namespace std;
void main()
{
	cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
	double degrees, minutes, seconds;
	cout << "First, enter the degrees: ";
	cin >> degrees;
	cout << "Next, enter the minute of arc: ";
	cin >> minutes;
	cout << "Finally, enter the second of arc: ";
	cin >> seconds;
	int factor = 60;
	cout << degrees << " degrees, " << minutes << " minutes " << seconds << "seconds" << " = "
		<< degrees + minutes / factor + seconds / factor / factor << " degrees" << endl;
}