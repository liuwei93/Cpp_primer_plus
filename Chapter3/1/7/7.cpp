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
	cout << "Your car will consume " << distance * 0.6241 / (oil / 3.875) << " gallon per mile" << endl;
}