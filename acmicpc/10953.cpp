#include <iostream>

using namespace std;

int main()
{
	ios::basic_ios::sync_with_stdio();

	int n = 0;
	cin >> n;
	int a, b = 0;
	while (n--)
	{
		scanf("%d,%d", &a, &b);
		cout << a + b << endl;
	}

	return 0;
}