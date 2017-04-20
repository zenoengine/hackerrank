#include <iostream>
#include <map>

using namespace std;

map<unsigned int, unsigned long long int> memo;

unsigned long long int Find(int n)
{
	if (n == 1)
	{
		return 1;
	}

	if (n == 2)
	{
		return 2;
	}

	if (memo.find(n) != memo.end())
	{
		return memo[n];
	}

	unsigned long long int a, b = 0;
	if (n - 2 > 0)
	{
		a = Find(n - 2);
	}

	if (n - 1 > 0)
	{
		b = Find(n - 1);
	}

	if (memo.find(n) == memo.end())
	{
		memo[n] = (a + b) % 10007;
	}

	return memo[n];
}

int main()
{
	int n = 0;
	cin >> n;

	unsigned long long int count = Find(n);

	cout << count;

	return 0;
}