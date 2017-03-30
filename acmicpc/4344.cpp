#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
	int t = 0;
	cin >> t;

	int n = 0;
	while (t--)
	{
		cin >> n;
		vector<int> scores;
		while (n--)
		{
			int value = 0;
			cin >> value;
			scores.push_back(value);
		}

		int sum = 0;
		float avg;
		for (int score : scores)
		{
			sum += score;
		}
		avg = (float)sum / scores.size();

		int cnt = 0;
		for (int score : scores)
		{
			if (score > avg)
			{
				cnt++;
			}
		}

		float percentage = ceilf(((float)cnt / scores.size()) *1000000)/10000;

		printf("%.3f%%\n", percentage);
	}

	return 0;
}