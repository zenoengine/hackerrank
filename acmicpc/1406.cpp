#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	stack<char> left;
	stack<char> right;
	std::string str;
	cin >> str;
	for(auto value : str)
	{
		left.push(value);
	}

	int N = 0;
	cin >> N;

	for(int i = 0 ; i < N; )
	{
		char cmd = getchar();
		if(cmd != '\n' && cmd != EOF)
		{
			i++;
		}

		switch(cmd)
		{
		case 'L':
		{
			if (!left.empty())
			{
				right.push(left.top());
				left.pop();
			}
		}
		break;
		case 'D':
		{
			if (!right.empty())
			{
				left.push(right.top());
				right.pop();
			}
		}
		break;
		case 'B':
		{
			if (!left.empty())
			{
				left.pop();
			}
		}
		break;
		case 'P':
		{
			char c = getchar();
			c = getchar();

			left.push(c);
		}
		break;
		}
	}

	while (!left.empty())
	{
		right.push(left.top());
		left.pop();
	}
	
	while (!right.empty())
	{
		cout << right.top();
		right.pop();
	}

	return 0;
}