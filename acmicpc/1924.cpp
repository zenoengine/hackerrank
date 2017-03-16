#include <iostream>
#include <string>

using namespace std;

int main()
{
	int monthDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	string Days[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
	ios::basic_ios::sync_with_stdio();

	int a, b = 0;

	cin >> a >> b;

	int sumDays = b;
	for (int i = 0; i < a-1; i++)
	{
		sumDays += monthDays[i];
	}

	cout << Days[sumDays % 7];
	
	return 0;
}