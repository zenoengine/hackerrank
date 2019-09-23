
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

			left.push(c);
			if (!right.empty()) {
				left.push(right.top());
				right.pop();
			}
		}

		stack<int> calcStk;
		while (!left.empty())
		{
			int c = left.top();
			if (c != '+') 
			{
				c = c - '0';
			}
			calcStk.push(c);
			left.pop();
		}

		while (calcStk.size() != 1)
		{
			int a = calcStk.top();
			calcStk.pop();
			int b = calcStk.top();
			calcStk.pop();
			int o = calcStk.top();
			calcStk.pop();

			if (o == '+') {
				int c = a + b;
				calcStk.push(c);
			}
		}

		cout << "#" << i+1 << " " << (int)calcStk.top() << endl;
			
	}

	return 0;
}