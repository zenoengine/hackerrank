#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void PrintMean(vector<int>& data)
{
	int sum = 0;
	for (auto value : data)
	{
		sum += value;
	}

	printf("%.1f\n", (float)sum / data.size());
}

void PrintMedian(vector<int>& data)
{
	std::sort(data.begin(), data.end());
	int size = data.size();
	float value = 0;
	if (size % 2 == 0)
	{
		int a = data[size / 2];
		int b = data[size / 2 - 1];

		value = float(a + b) / 2;
	}
	else
	{
		value = data[size / 2];
	}

	printf("%.1f\n", (float)value);
}

void PrintMode(vector<int>& data)
{
	int prevValue = data[0];
	int count = 1;
	int maxCount = 1;
	int maxCountValue = data[0];

	for (int idx = 1; idx < data.size(); idx++)
	{
		int value = data[idx];
		if (prevValue == value)
		{
			count++;
			if (maxCount < count)
			{
				maxCount = count;
				maxCountValue = value;
			}
		}
		else
		{
			count = 1;
			prevValue = value;
		}
	}

	printf("%d\n", maxCountValue);
}

int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int size = 0;
	vector<int> data;
	
	cin >> size;

	int input = 0;
	while (size--)
	{
		cin >> input;
		data.push_back(input);
	}

	PrintMean(data);
	PrintMedian(data);
	PrintMode(data);

	return 0;
}
