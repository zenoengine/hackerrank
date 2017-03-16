#include <iostream>

using namespace std;

int main()
{
	ios::basic_ios::sync_with_stdio();

	int n = 0;
	cin >> n;
	int a, b = 0;
	int i = 1;
	while (n--)
	{
		cin >> a >> b;
		cout << "Case #" << i << ": " << a << " + " << b << " = " << a + b << endl;
		i++;
	}

	return 0;
}