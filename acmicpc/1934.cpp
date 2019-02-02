#include <iostream>

using namespace std;

int GetGCD(int a, int b)
{
	if (a % b == 0)
	{
		return b;
	}
	else
	{
		return GetGCD(b, a%b);
	}
}

int main()
{
	int N = 0;
	cin >> N;
	while(N--)
	{
		int a = 0;
		int b = 0;
		cin >> a >> b;
		int gdc = GetGCD(a, b);

		cout <<  a * b / gdc << endl;
	}

	return 0;
}