#include <iostream>
using namespace std;
void main()
{
	cout << "Please input the distance in km: ";
	double distance;
	cin >> distance;
	cout << "Please input the consume of the oil in liter: ";
	double oil;
	cin >> oil;
	cout << "Your car will consume " << oil / distance << " liter per km" << endl;
}