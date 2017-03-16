#include <iostream>

using namespace std;

int main()
{
	ios::basic_ios::sync_with_stdio();

	int n = 0;

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= (n - i); j++)
		{
			printf(" ");
		}

		for (int k = 1; k <= i; k++)
		{
			printf("*");
		}

		printf("\n");
	}

	return 0;
}