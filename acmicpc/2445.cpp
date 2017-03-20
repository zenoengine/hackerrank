#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio();

	int n = 0;
	cin >> n;

	int maxStart = 2 * n;

	int starCount = 2;
	int spaceCount = 2*n - starCount;
	for (int i = 0; i < 2 * n - 1; i++)
	{
		for (int j = 0; j < starCount / 2; j++)
		{
			cout << '*';
		}

		for (int k = 0; k < spaceCount; k++)
		{
			cout << ' ';
		}

		for (int j = 0; j < starCount / 2; j++)
		{
			cout << '*';
		}

		cout << '\n';

		if (i < n-1)
		{
			starCount += 2;
		}
		else
		{
			starCount -= 2;
		}

		spaceCount = 2 * n - starCount;
	}

	return 0;
}