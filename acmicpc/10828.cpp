#include <iostream>
#include <string>

using namespace std;

int main()
{
	std::ios_base::sync_with_stdio();
	
	int n = 0;
	cin >> n;

	int arr[10000] = { 0, };
	int size = 0;
	
	string command;
	int value = 0;
	while (n--)
	{
		command.clear();
		cin >> command;
		if (command == "push")
		{
			cin >> value;
			arr[size] = value;
			size++;
		}
		else if (command == "top")
		{
			if (size != 0)
			{
				cout << arr[size - 1] << '\n';
			}
			else
			{
				cout << "-1" << '\n';
			}
		}
		else if (command == "empty")
		{
			if (size == 0)
			{
				cout << "1" << '\n';
			}
			else
			{
				cout << "0" << '\n';
			}
		}
		else if (command == "size")
		{
			cout << size << '\n';
		}
		else if (command == "pop")
		{
			if (size == 0)
			{
				cout << "-1" << '\n';
			}
			else 
			{
				cout << arr[size - 1] << '\n';
				size--;
			}
		}

	}

	return 0;
}