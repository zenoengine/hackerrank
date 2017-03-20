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

		int col = (i + 1) * 2 - 1;
		for (int j = 0; j < col; j++)
		{
			if (i < n-1)
			{
				if (j % col == 0 || j % col == col-1)
				{
					cout << '*';
				}
				else
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