#include <set>

int solution(int X, vector<int> &A)
{
    set<int> s;

    for (int i = 1; i <= X; i++)
    {
        s.insert(i);
    }

    for (unsigned int i = 0; i < A.size(); i++)
    {
        auto iter = s.find(A[i]);
        if (iter != s.end())
        {
            s.erase(iter);
        }

        if (s.empty())
        {
            return i;
        }
    }

    return -1;
}