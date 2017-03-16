#include <iostream>

using namespace std;

int main()
{
	ios::basic_ios::sync_with_stdio();

	int n = 0;
	cin >> n;

	for (int i = 1; i < 10; i++)
	{
		printf("%d * %d = %d\n", n, i, n*i);
	}

	return 0;
}