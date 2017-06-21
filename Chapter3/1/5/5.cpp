#include <iostream>
using namespace std;
void main()
{
	cout << "Enter the world's populatin: ";
	long long world;
	cin >> world;
	cout << "Enter the population of China: ";
	long long  China;
	cin >> China;
	cout << "The population of China is " << long double(China) / long double(world) * 100
		<< " % " << "of the world population" << endl;
}