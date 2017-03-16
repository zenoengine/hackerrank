#include <iostream>

using namespace std;

int main()
{
	ios::basic_ios::sync_with_stdio();

	int n = 0;

	cin >> n;

	int max = 2 * n - 1;

	for (int r = 1; r <= n; r++)
	{
		int starCount = 2 * r - 1;
		int spaceCount = (max - starCount)/2;

		for (int i = 0; i < spaceCount; i++)
		{
			printf(" ");
		}

		for (int i = 0; i < starCount; i++)
		{
			printf("*");
		}

		printf("\n");
	}

	return 0;
}