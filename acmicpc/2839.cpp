#include <iostream>

using namespace std;

int main()
{
	std::ios_base::sync_with_stdio();

	int n = 0;
	cin >> n;

	int temp = n;
	int cnt = 0;
	bool canMake = true;
	while (temp)
	{
		if ((temp - 5) % 3 == 0 || (temp-5)%5 == 0)
		{
			temp -= 5;
			cnt++;
		}
		else
		{
			temp -= 3;
			cnt++;
		}

		if (temp < 0)
		{
			canMake = false;
			break;
		}
	}
	
	if (canMake)
	{
		cout << cnt << '\n';
	}
	else
	{
		cout << "-1" << '\n';
	}
	return 0;
}
