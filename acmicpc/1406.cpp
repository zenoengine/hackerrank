#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main()
{
	std::ios_base::sync_with_stdio();

	string text;
	cin >> text;

	vector<char> vec;
	for (int i = 0; i < text.length(); i++)
	{
		vec.push_back(text[i]);
	}

	int n = 0;
	cin >> n;

	auto cursor = vec.end();
	char command = '\0';
	while (n--)
	{
		cin >> command;
		switch (command)
		{
		case 'L':
		{
			if (cursor != vec.begin())
			{
				cursor--;
			}
		}
			break;
		case 'D':
		{
			if (cursor != vec.end())
			{
				cursor++;
			}
		}
			break;
		case 'P':
		{
			char c;
			cin >> c;
			cursor = vec.insert(cursor, c);
			cursor++;
		}
			break;
		case 'B':
		{
			if (!vec.empty() && cursor != vec.begin())
			{
				auto deleteIter = cursor - 1;
				cursor = vec.erase(deleteIter);
			}
		}
			break;
		default:
			break;
		}
	}

	text.clear();
	for (auto c : vec)
	{
		cout << c;
	}

	cout << text;

	return 0;
}