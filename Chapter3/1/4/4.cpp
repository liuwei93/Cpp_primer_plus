#include <iostream>
using namespace std;
void main()
{
	long long seconds;
	cout << "Enter the number of seconds: ";
	cin >> seconds;
	int hours_in_day = 24;
	int minutes_in_hour = 60, seconds_in_minute = 60;
	cout << seconds << " seconds = " << seconds / (hours_in_day * minutes_in_hour * seconds_in_minute)
		<< " days, " << seconds % (hours_in_day * minutes_in_hour * seconds_in_minute) / (minutes_in_hour * seconds_in_minute)
		<< " hours, " << seconds % (hours_in_day * minutes_in_hour * seconds_in_minute) % (minutes_in_hour * seconds_in_minute)
		/ seconds_in_minute << " minutes " << seconds % (hours_in_day * minutes_in_hour * seconds_in_minute) 
		% (minutes_in_hour * seconds_in_minute)
		% seconds_in_minute << " seconds" << endl;
}