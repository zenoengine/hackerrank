#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	std::ios_base::sync_with_stdio();
	int n = 0;
	cin >> n;

	string equation;
	while (n--)
	{
		std::stack<char> stk;
		cin >> equation;

		for (int i = 0; i < equation.length(); i++)
		{
			char c = equation[i];
			if (c== '(')
			{
				stk.push(c);
			}
			else if(c == ')') 
			{
				if (!stk.empty())
				{
					if (stk.top() == '(')
					{
						stk.pop();
					}
				}
				else
				{
					stk.push(c);
					break;
				}
			}
		}

		if (stk.empty())
		{
			cout << "YES" << '\n';
		}
		else
		{
			cout << "NO" << '\n';
		}
	}

	return 0;
}