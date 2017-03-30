#include <iostream>
#include <queue>


using namespace std;

int main()
{
	std::ios_base::sync_with_stdio();
	int n, c = 0;
	cin >> n >> c;

	queue<int> que;
	for (int i = 0; i < n; i++)
	{
		que.push(i + 1);
	}

	cout << "<";
	while (n--)
	{
		for (int i = 0; i < c; i++)
		{
			int p = que.front();
			que.pop();
			if (i == c - 1)
			{
				cout << p;
				if (que.size() != 0)
				{
					cout << ", ";
				}
			}
			else
			{
				que.push(p);
			}
		}
	}
	cout << ">";

	return 0;
}