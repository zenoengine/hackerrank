#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool IsPM(const string& time)
{
	return (time.find_first_of("P") != string::npos);
}

vector<string> SplitTime(string time)
{
	bool isPM = IsPM(time);
	size_t firstIndex = 0;
	vector<string> splitedTime;


	for (size_t index = 0; index < 3; index++)
	{
		splitedTime.push_back(time.substr(0, 2));
		time.erase(0, 3);
	}

	if (isPM)
	{
		splitedTime.push_back("PM");
	}
	else
	{
		splitedTime.push_back("AM");
	}

	return splitedTime;
}

void Print24TimeFormat(int hour, int min, int sec)
{
	if (hour < 10)
	{
		cout << "0";
	}
	cout << hour << ":";

	if (min < 10)
	{
		cout << "0";
	}
	cout << min << ":";

	if (sec < 10)
	{
		cout << "0";
	}
	cout << sec;
}

int main() {
	string time;
	cin >> time;

	vector<string> splitedTime = SplitTime(time);

	int hour = atoi(splitedTime[0].c_str());
	int min = atoi(splitedTime[1].c_str());
	int sec = atoi(splitedTime[2].c_str());
	bool isPM = IsPM(splitedTime[3]);

	if (hour == 12 && isPM != true)
	{
		hour = 0;
	}

	if (hour == 12 && isPM && (min&sec) == 0)
	{
		hour = 0;
	}

	if (isPM && hour < 12)
	{
		hour += 12;
	}

	Print24TimeFormat(hour, min, sec);

	return 0;
}