// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(int N, vector<int> &A) {
    
    int * p = new int[N];
    
    int max = 0;
    int idx =0;
    int finalMax = 0;
    
    for(int i = 0 ; i < N; i++)
    {
        p[i] = 0;
    }
    
    for(int i = 0 ; i < A.size(); i++)
    {
        if(A[i] == N+1)
        {
            finalMax = max;
        }
        else
        {
            idx = A[i] - 1;
            
            if(p[idx] < finalMax)
            {
                p[idx] = finalMax;
            }
            
            p[idx] += 1;
            if( max < p[idx] )
            {
                max = p[idx];
            }
        }
    }
    
    A.resize(N);
    
    
    
    for(int i = 0 ; i < N; i++)
    {
        if(p[i] < finalMax)
        {
            p[i] = finalMax;
        }
        A[i] = p[i];
    }
    
    return A;
    // write your code in C++14 (g++ 6.2.0)
}