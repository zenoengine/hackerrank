#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio();
	int n = 0;
	cin >> n;

	int min, max, cnt = 0;
	min = 1;
	max = 1;
	cnt = 1;

	while (!(min <= n && n <= max))
	{
		min = max + 1;
		max = min-1 + 6 * cnt;
		cnt++;
	}
	
	cout << cnt;

	return 0;
}