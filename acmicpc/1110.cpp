#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio();
	int n = 0;
	cin >> n;

	int a = n / 10;
	int b = n % 10;
	int c = (a + b) % 10;
	int newNum = b * 10 + c;

	int cnt = 1;
	while (newNum != n)
	{
		a = newNum / 10;
		b = newNum % 10;
		c = (a + b) % 10;
		newNum = b * 10 + c;
		cnt++;
	}
	
	cout << cnt;

	return 0;
}