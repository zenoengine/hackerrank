#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main()
{
	std::ios_base::sync_with_stdio();
	
	deque<int> deq;

	int n = 0;
	cin >> n;

	string command;
	int value = 0;
	while (n--)
	{
		cin >> command;
		if (command == "push_front")
		{
			cin >> value;
			deq.push_front(value);
		}
		else if (command == "push_back")
		{
			cin >> value;
			deq.push_back(value);
		}
		else if (command == "pop_front")
		{
			if (deq.empty())
			{
				cout << "-1\n";
				continue;
			}
			cout << deq.front() << '\n';
			deq.pop_front();
		}
		else if (command == "pop_back")
		{
			if (deq.empty())
			{
				cout << "-1\n";
				continue;
			}
			cout << deq.back() << '\n';
			deq.pop_back();
		}
		else if (command == "size")
		{
			cout << deq.size() << '\n';
		}
		else if (command == "empty")
		{
			if (deq.empty())
			{
				cout << "1\n";
			}
			else
			{
				cout << "0\n";
			}
		}
		else if (command == "front")
		{
			if (deq.empty())
			{
				cout << "-1\n";
				continue;
			}
			cout << deq.front() << '\n';
		}
		else if (command == "back")
		{
			if (deq.empty())
			{
				cout << "-1\n";
				continue;
			}
			cout << deq.back() << '\n';
		}
	}
	return 0;
}