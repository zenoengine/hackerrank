#include <algorithm>

int solution(vector<int> &A) {
    int result = 1;
    
    if(A.size() == 0)
    {
        return result;
    }
    
    sort(A.begin(), A.end());
    
    int prev = A[0]; // 1 or end of
    
    if(A[0] == 1)
    {
        result = A.back() + 1;
    }
    else
    {
        result = 1;
    }
    
    for(auto value : A)
    {
        int diff = value - prev;
        if(diff > 1)
        {
            result = value - 1 ;
            break;
        }   
        prev = value;
    }
    
    return result;
}