
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> minutes;

	int time = 0;
	while (n--)
	{
		cin >> time;
		minutes.push_back(time);
	}

	std::sort(minutes.begin(), minutes.end());


	vector<int> sum(minutes.size());
	for (int idx = 0; idx < minutes.size(); idx++)
	{
		if (idx == 0)
		{
			sum[idx] = minutes[idx];
		}
		else
		{
			sum[idx] = sum[idx - 1] + minutes[idx];
		}
	}

	int total = 0;
	for (auto value : sum)
	{
		total += value;
	}
	
	cout << total;
	
	return 0;
}