// you can use includes, for example:
 #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    if (A.size() < 3)
    {
        return 0;
    }
    
    std::sort(A.begin(), A.end());
    
    vector<int> B;
    
    int prev = A[0];
    B.push_back(prev);
    for(int i = 1 ; i < A.size(); i++)
    {
        if(prev != A[i])
        {
            B.push_back(A[i]);
            prev = A[i];
        }
    }
    
    for(int i = 0; i < A.size() - 2; i++)
    {
        int p = i;
        int q = i+1;
        int r = i+2;
        long long int s,t,u = 0;
        s = (long long int)A[p] + A[q];
        t = (long long int)A[q] + A[r];
        u = (long long int)A[r] + A[p];
        if (s > A[r] &&
            t > A[p] &&
            u > A[q])
        {
            return 1;
        }
    }   
    
    return 0;
}