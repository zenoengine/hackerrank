
#include <iostream>
#include <stack>

using namespace std;

int main()
{

	for (int i = 0; i < 10; i++)
	{

		int n = 0;
		cin >> n;

		stack<char> left;
		stack<char> right;

		for (int idx = 0; idx < n; idx++)
		{
			char c;
			cin >> c;

			if (c == '+')
			{
				right.push(c);
				continue;
			}

			if (c == '*')
			{
				char bo = left.top();
				if (bo == '+')
				{
					left.pop();
					char b = left.top();
					left.pop();
					left.push(b);
					right.push(bo);
				}
				right.push(c);

				continue;
			}

			left.push(c);
			while (!right.empty()) {
				left.push(right.top());
				right.pop();
			}
		}

		stack<int> calcStk;
		while (!left.empty())
		{
			int c = left.top();
			if (c != '+' && c != '*')
			{
				c = c - '0';
			}
			calcStk.push(c);
			left.pop();
		}

		stack<int> intstk;
		stack<char> opStk;

		while (!calcStk.empty())
		{
			if (calcStk.size() == 1)
			{
				int i = 0;
			}
			int d = calcStk.top();
			calcStk.pop();

			if (d != '+' && d != '*')
			{
				intstk.push(d);
				continue;
			}
			else
			{
				opStk.push(d);
			}


			while (intstk.size() >= 2 && !opStk.empty())
			{
				int a = intstk.top();
				intstk.pop();
				int b = intstk.top();
				intstk.pop();

				char o = opStk.top();
				opStk.pop();
				if (o == '+') {
					int c = a + b;
					intstk.push(c);
				}
				else if (o == '*') {
					int c = a * b;
					intstk.push(c);
				}
			}
		}

		cout << "#" << i + 1 << " " << (int)intstk.top() << endl;

	}

	return 0;
}