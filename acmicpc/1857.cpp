#include <iostream>

using namespace std;


bool IsPrimeNumber(int d)
{
	if (d == 1)
	{
		return false;
	}

	bool isPrime = true;
	for(int i = 2 ; i < d; i++)
	{
		if (d%i == 0)
		{
			isPrime = false;
			break;
		}
	}
	return isPrime;
}

int main()
{
	int N = 0;
	cin >> N;
	
	int count = 0;
	while(N--)
	{
		int d = 0;
		cin >> d;
		if (IsPrimeNumber(d))
		{
			count++;
		}
	}

	cout << count;

	return 0;
}