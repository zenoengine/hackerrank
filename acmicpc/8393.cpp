#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::basic_ios::sync_with_stdio();

	int n = 0;
	cin >> n;
	
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += i;
	}

	cout << sum;

	return 0;
}