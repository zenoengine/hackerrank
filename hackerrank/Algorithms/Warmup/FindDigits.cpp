#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
	int n = 0;
	cin >> n;
	
	vector<int> divisionDigitVector;
	while (n--)
	{
		int number = 0;
		cin >> number;
		std::string buffer = std::to_string(number);

		for (int i = 0; i < buffer.length(); i++)
		{
			if (buffer[i] == '\n')
			{
				break;
			}

			char c = buffer[i];
			int digit = atoi(&c);

			if (digit == 0)
			{
				continue;
			}

			if (number % digit == 0)
			{
				divisionDigitVector.push_back(digit);
			}
		}

		cout << divisionDigitVector.size() << endl;
		divisionDigitVector.clear();
	}
	return 0;
}
