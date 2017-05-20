
#include <iostream>
#include <map>

using namespace std;

int Min(int a, int b)
{
	int result = a;
	if (a > b)
	{
		result = b;
	}

	return result;
}

int main()
{
	int N;
	cin >> N;

	map<int, int> prime;

	int Factorial = N;
	while(Factorial != 0)
	{
		int currentValue = Factorial;
		for (int i = 2; i*i <= Factorial; i++)
		{
			while (currentValue%i == 0)
			{
				currentValue /= i;
				prime[i]++;
			}
		}

		if (currentValue > 1)
		{
			prime[currentValue]++;
		}

		Factorial--;
	}

	int count = Min(prime[2], prime[5]);

	cout << count;

	return 0;
}