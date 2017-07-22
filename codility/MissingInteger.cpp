// you can use includes, for example:
#include <set>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    set<int> S;
    for(auto var : A)
    {
        if(var > 0)
        {
            S.insert(var);
        }
    }
    
    int count = 1;
    for(auto var : S)
    {
        if(count != var)
        {
            break;
        }   
        count++;
    }
    
    if(count == 0)
    {
        count = 1;
    }
    
    return count;
}