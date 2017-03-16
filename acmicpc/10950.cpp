#include <iostream>
using namespace std;

int main()
{
	int n = 0;

	cin >> n;

	int a, b = 0;
	while (n--)
	{
		cin >> a >> b;
		cout << a + b << endl;
	}

	return 0;
}