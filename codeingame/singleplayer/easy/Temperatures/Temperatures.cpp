#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
* Auto-generated code below aims at helping you parse
* the standard input according to the problem statement.
**/
int main()
{
	int n; // the number of temperatures to analyse
	cin >> n; cin.ignore();
	string temps; // the n temperatures expressed as integers ranging from -273 to 5526
	getline(cin, temps);

	cerr << temps << endl;

	int val = 0;
	int absVal = 0;

	int nearVal = 5527;
	int absNearVal = 5527;

	string delimiter = " ";
	size_t pos = 0;
	string token;
	while (n--)
	{
		pos = temps.find(delimiter);
		token = temps.substr(0, pos);
		temps.erase(0, pos + delimiter.length());

		val = atoi(token.c_str());
		absVal = abs(val);


		if (absNearVal >= absVal)
		{
			if (absNearVal == absVal && val <= nearVal)
			{
			}
			else
			{
				nearVal = val;
				absNearVal = absVal;
			}
		}
	}

	if (nearVal < -273)
	{
		nearVal = 0;
	}
	else if (nearVal > 5526)
	{
		nearVal = 0;
	}

	// Write an action using cout. DON'T FORGET THE "<< endl"
	// To debug: cerr << "Debug messages..." << endl;


	cout << nearVal << endl;
}