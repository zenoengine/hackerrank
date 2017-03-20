#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio();

	int n = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int maxCount = (2 * i + 1);
		int sCount = n-i-1;
		for (int k = 0; k < sCount; k++)
		{
			cout << ' ';
		}

		for (int j = 0; j < maxCount; j++)
		{
			cout << '*';
		}
		cout << '\n';
	}

	for (int i = 1; i < n; i++)
	{
		int maxCount = 2 * n - (2*i + 1);
		int sCount = i;
		for (int k = 0; k < sCount; k++)
		{
			cout << ' ';
		}

		for (int j = 0; j < maxCount; j++)
		{
			cout << '*';
		}
		cout << '\n';
	}

	return 0;
}