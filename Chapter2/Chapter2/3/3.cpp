#include <iostream>
using namespace std;
void main()
{
	void show1();
	void show2();
	show1();
	show1();
	show2();
	show2();
}

void show1()
{
	cout << "Three blind mice" << endl;
}

void show2()
{
	cout << "See how they run" << endl;
}