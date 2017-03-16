#include <iostream>

using namespace std;

int main()
{
	ios::basic_ios::sync_with_stdio();

	int a, b = 0;
	while (cin >> a >> b)
	{
		if (a == 0 && b == 0)
		{
			break;
		}

		cout << a + b << endl;
	}

	return 0;
}