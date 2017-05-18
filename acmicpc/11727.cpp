#include <iostream>
#include <map>

using namespace std;

map<int, int> memo;
int Calculate(int n)
{
	if (n <= 0)
	{
		return 1;
	}

	if (n == 1)
	{
		return 1;
	}

	if (memo.find(n) != memo.end())
	{
		return memo[n];
	}

	int way = 0;
	way += 1 * Calculate(n - 1);
	way += 2 * Calculate(n - 2);

	memo[n] = way % 10007;

	return way % 10007;
}

int main()
{
	ios::sync_with_stdio();
	int n = 0;
	cin >> n;

	cout <<	Calculate(n);

	return 0;
}