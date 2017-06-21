#include <iostream>
using namespace std;
void main()
{
	cout << "Please input your age:" << endl;
	int age;
	cin >> age;
	int months = (age - 1) * 12;
	cout << "You have passed " << months << " months" << endl;
}