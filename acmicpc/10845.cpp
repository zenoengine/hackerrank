#include <iostream>
#include <string>
using namespace std;

int main()
{
	std::ios_base::sync_with_stdio();
	
	int queue[10000] = {0,};
	int begin = 0;
	int end = 0;

	int n = 0;

	string command;
	int value;
	cin >> n;
	while (n--)
	{
		cin >> command;
		
		if (command == "push")
		{
			cin >> value;
			queue[end] = value;
			end++;
		}
		else if (command == "pop")
		{
			if (begin == end)
			{
				cout << "-1" << '\n';
				continue;
			}

			cout << queue[begin] << '\n';
			begin++;
		}
		else if (command == "size")
		{
			cout << end - begin << '\n';
		}
		else if (command == "empty")
		{
			if (end - begin == 0)
			{
				cout << "1" << '\n';
			}
			else
			{
				cout << "0" << '\n';
			}
		}
		else if (command == "front")
		{
			if (end - begin == 0)
			{
				cout << "-1" << '\n';
				continue;
			}

			cout << queue[begin] << '\n';
		}
		else if (command == "back")
		{
			if (end - begin == 0)
			{
				cout << "-1" << '\n';
				continue;
			}

			cout << queue[end - 1] << '\n';
		}
	}
	
	return 0;
}