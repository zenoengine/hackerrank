#include <iostream>
#include <map>
using namespace std;

int p[10000];
map<int, int> memo;


int calc(int n)
{
	if (n == 0)
	{
		return 0;
	}

	if (n == 1)
	{
		return p[0];
	}

	if (memo.find(n) != memo.end())
	{
		return memo[n];
	}

	int max = p[n - 1];
	for (int i = 1; i < n; i++)
	{
		int sum = calc(i) + calc(n - i);
		if (sum > max)
		{
			max = sum;
		}
	}
	memo[n] = max;

	return max;
}

int main()
{
	int n = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> p[i];
	}

	for (int i = 0; i < n; i++)
	{
		calc(n);
	}

	cout << calc(n);

	return 0;
}