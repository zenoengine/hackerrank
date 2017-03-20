#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio();

	int n = 0;
	cin >> n;

	int leftSpaceCount = n - 1;

	for (int i = 0; i < n; i++)
	{
		for (int k = 0; k < leftSpaceCount; k++)
		{
			cout << ' ';
		}

		for (int j = 0; j < (i + 1) * 2; j++)
		{
			if (j % 2 == 0)
			{
				if (j != 0)
				{
					cout << ' ';
				}
			}
			else
			{
				cout << '*';
			}
		}

		cout << '\n';

		leftSpaceCount--;
	}

	return 0;
}