#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	int memo[1000][10] = {0,};

	cin >> n;

	long long sum = 0;

	for(int i = 0 ; i < 10; i ++)
	{
		memo[0][i] = 1;
	}

	for (int k = 1; k <= n - 1; k++)
	{
		for(int i = 0 ; i < 10; i++)
		{
			for (int j = 0; j <= i; j++)
			{
				memo[k][i] += memo[k - 1][j];
				memo[k][i] %= 10007;
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		sum += memo[n - 1][i];
		sum %= 10007;
	}
	
	cout << sum;

	return 0;
}