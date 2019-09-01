#include <iostream>
#include <vector>
#include <array>

using namespace std;

class BracketsStatck
{
private:
    std::vector<char> data;
    int top = 0;

public:
    struct BracketMatch
    {
        char l;
        char r;
    };

    std::array<BracketMatch, 4> types;

    BracketsStatck(int n)
    {
        data.reserve(n);

        types[0] = BracketMatch{'(', ')'};
        types[1] = BracketMatch{'{','}'};
        types[2] = BracketMatch{'[',']'};
        types[3] = BracketMatch{'<','>'};
    };

    bool isEmpty() { return top == 0;}

    void push(char c)
    {
        data.push_back(c);
        top++;
    }

    char getTop()
    {
        return data[top - 1];
    }

    void pop()
    {
        data.pop_back();
        top--;
    }

    bool isRightBracket(char c)
    {
        if(c == ')' || c == ']' || c == '}' || c == '>')
        {
            return true;
        }

        return false;
    }

    bool isCoupleBracket(char r, char l)
    {
        for (auto t : types)
        {
            if (t.r == r && t.l == l)
            {
                return true;
            }
        }
        return false;
    }
};

int main()
{
    // '()', '[]', '{}', '<>'

    for (int i = 1; i <= 10; i++)
    {
        int size = 0;
        cin >> size;

        std::string input;
        cin >> input;

        BracketsStatck stk(size);
        for (int j = 0; j < size ; j++)
        {
            if (stk.isRightBracket(input[j]))
            {
                if (!stk.isEmpty())
                {
                    if (stk.isCoupleBracket(input[j], stk.getTop()))
                    {
                        stk.pop();
                    }
                    else
                    {
                        stk.push(input[j]);
                        break;
                    }
                }
                else
                {
                    stk.push(input[j]);
                    break;
                }
            }
            else
            {
                stk.push(input[j]);
            }
        }

        bool isValid = stk.isEmpty() ? true : false;
        
        cout << "#" << i << " " << (int)isValid << endl;
    }

    return 0;
}