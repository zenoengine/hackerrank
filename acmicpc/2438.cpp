#include <iostream>

using namespace std;

int main()
{
	ios::basic_ios::sync_with_stdio();

	int n = 0;

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int col = 1; col <= i; col++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}