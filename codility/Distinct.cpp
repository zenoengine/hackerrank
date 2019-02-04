// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    
    if (A.size() == 0)
    {
        return 0;
    }
    
    std::sort(A.begin(), A.end());
    
    int prev = A[0];
    int cnt = 1;
    for(int i = 1; i < A.size(); i++)
    {
        if(prev != A[i])
        {
            cnt++;
            prev = A[i];
        }
    }
    
    return cnt;
}