#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio();

	int n = 0;
	cin >> n;

	int starCount = 1;
	int spaceCount = n-1;
	for (int i = 0; i < 2 * n - 1; i++)
	{
		for (int j = 0; j < spaceCount; j++)
		{
			cout << ' ';
		}

		for (int k = 0; k < starCount; k++)
		{
			cout << '*';
		}

		if (i < n - 1)
		{
			spaceCount--;
			starCount++;
		}
		else
		{
			spaceCount++;
			starCount--;
		}
		
		cout << '\n';
	}

	return 0;
}