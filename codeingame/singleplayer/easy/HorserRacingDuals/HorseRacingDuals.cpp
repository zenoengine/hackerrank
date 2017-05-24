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
	vector<int> horses;

	int N;
	cin >> N; cin.ignore();
	for (int i = 0; i < N; i++) {
		int Pi;
		cin >> Pi;
		horses.push_back(Pi);
		cerr << Pi << endl;
	}

	std::sort(horses.begin(), horses.end());

	int cur = 0;
	int prev = 0;

	int minDiff = 10000;
	int len = horses.size();
	for (int idx = 0; idx < len; idx++)
	{
		cur = horses[idx];
		int diff = cur - prev;

		if (diff < minDiff)
		{
			minDiff = diff;
		}
		prev = cur;
	}


	cout << minDiff << endl;
}
