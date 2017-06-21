#include <iostream>
using namespace std;
void main()
{
	double const foot_to_inch = 12;
	double const inch_to_m = 0.0254;
	double const pound_to_kg = 1 / 2.2;

	cout << "Please input your height: ____ feet" << "\b\b\b\b\b\b\b\b\b";
	int foot;
	cin >> foot ;
	cout << "                          ____ inchs" << "\b\b\b\b\b\b\b\b\b\b";
	int inch;
	cin >> inch;
	cout << "Please input your weight: ____ pound" << "\b\b\b\b\b\b\b\b\b\b";
	double weight;
	cin >> weight;
	double height = (foot * foot_to_inch + inch) * inch_to_m;
	double BMI = (weight * pound_to_kg) / (height * height);
	cout << endl << "Your BMI is " << BMI << endl;
}