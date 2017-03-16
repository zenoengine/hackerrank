#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::basic_ios::sync_with_stdio();

	int n = 0;
	cin >> n;

	int min = 1000000;
	int max = -1000000;
	int i = 0;
	while (n--)
	{
		cin >> i;
		if (i < min)
		{
			min = i;
		}

		if (i > max)
		{
			max = i;
		}
	}

	printf("%d %d", min, max);

	return 0;
}