#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio();

	int n = 0;
	cin >> n;

	int starCount = 2*n-1;
	int spaceCount = 0;
	for (int i = 0; i < 2 * n - 1; i++)
	{
		for (int k = 0; k < spaceCount; k++)
		{
			cout << ' ';
		}

		for (int j = 0; j < starCount ; j++)
		{
			cout << '*';
		}

		cout << '\n';

		if (i < n - 1)
		{
			spaceCount += 1;
			starCount -= 2;
		}
		else
		{
			spaceCount -= 1;
			starCount += 2;
		}
	}

	return 0;
}