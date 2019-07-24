#include <iostream>

using namespace std;

int main()
{
	const int MAX_SIZE = 100;

	int T = 10;
	while(T--)
	{
		int currentCaseNum = 0;
		cin >> currentCaseNum;

		int arr[MAX_SIZE][MAX_SIZE] = { 0, };
		for (int i = 0; i < MAX_SIZE; i++)
		{
			for (int j = 0; j < MAX_SIZE; j++)
			{
				cin >> arr[i][j];
			}
		}

		int maxSum = 0;
		int sum = 0;
		for (int i = 0; i < MAX_SIZE; i++)
		{
			for (int j = 0; j < MAX_SIZE; j++)
			{
				sum += arr[i][j];
			}

			if (sum > maxSum)
			{
				maxSum = sum;
			}
			sum = 0;
		}

		for (int j = 0; j < MAX_SIZE; j++)
		{
			for (int i = 0; i < MAX_SIZE; i++)
			{
				sum += arr[i][j];
			}

			if (sum > maxSum)
			{
				maxSum = sum;
			}
			sum = 0;
		}

		for (int j = 0, i = 0; j < MAX_SIZE && i < MAX_SIZE; j++, i++)
		{
			sum += arr[i][j];
		}
		if (sum > maxSum)
		{
			maxSum = sum;
		}
		sum = 0;

		for (int j = 0, i = MAX_SIZE - 1; j < MAX_SIZE && i > 0; j++, i--)
		{
			sum += arr[i][j];
		}
		if (sum > maxSum)
		{
			maxSum = sum;
		}
		sum = 0;

		cout << "#" << currentCaseNum << " " << maxSum << endl;
	}

	return 0;
}