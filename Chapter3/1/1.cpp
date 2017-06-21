#include <iostream>
using namespace std;
void main()
{
	cout << "Please input your height in inch:______\b\b\b\b\b\b" ;
	int height;
	cin >> height;
	int const factor = 12;
	int inch = height % factor;
	int foot = height / factor;
	cout << "You are " <<  foot << " feet, " << inch <<" inchs height!!" << endl;
}