#include <iostream>
#include <stack>
#include <vector>

using namespace std;

bool IsHigherOrSamePriority(char op1, char op2)
{    
    if (op1 == '*' && op2 == '+')
    {
        return true;
    }

    if (op1 == op2)
    {
        return true;
    }

    return false;
}

int main()
{
    for (int T = 0 ; T < 10; T++)
    {
        int size = 0;
        cin >> size;

        std::string input;
        cin >> input;

        std::vector<char> output;
        std::stack<char> stk;

        for (int i = 0 ; i < size; i++)
        {
            char c = input[i];

            if ('0' <= c && c <= '9')
            {
                output.push_back(c);
                continue;
            }

            if (stk.empty())
            {
                stk.push(c);
                continue;
            }

            if (c == ')')
            {
                while(!stk.empty())
                {
                    if (stk.top() == '(')
                    {
                        stk.pop();
                        break;
                    }

                    output.push_back(stk.top());
                    stk.pop();
                }

                continue;
            }

            if (c == '(' || IsHigherOrSamePriority(c, stk.top()))
            {
                stk.push(c);
            }
            else
            {
                while(!stk.empty() && !IsHigherOrSamePriority(c, stk.top()))
                {
                    if (stk.top() != '(')
                    {
                        output.push_back(stk.top());
                    }
                    else
                    {
                        break;
                    }
                    stk.pop();
                }

                stk.push(c);            
            }
        }

        while(!stk.empty())
        {
            if (stk.top() == '(')
            {
                stk.pop();
                continue;
            }

            output.push_back(stk.top());
            stk.pop();
        }

        stack<int> num;

        for(int i = 0 ; i < output.size(); i++)
        {
            char c = output[i];

            if ('0' <= c && c <= '9')
            {
                num.push(c - '0');
            }
            else
            {
                int a = num.top();
                num.pop();

                int b = num.top();
                num.pop();

                int ret = 0;

                if (c == '+')
                {
                    ret = a+b;
                }
                else if (c == '*')
                {
                    ret = a*b;
                }

                num.push(ret);
            }
        }

        cout << "#" << T+1 << " " << num.top() << endl;
    }

    return 0;
}