#include <iostream>
using namespace std;
void main()
{
	cout << "Enter the number of hours:" ;
	void show(int, int);
	int hours;
	int minutes;
	cin >> hours;
	cout << "Enter the number of hours:" ;
	cin >> minutes;
	show(hours, minutes);
}

void show(int x, int y)
{
	cout << "Time:" << x << ':' << y << endl;
}