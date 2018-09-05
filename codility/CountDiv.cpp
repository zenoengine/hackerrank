// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int A, int B, int K) {
    // write your code in C++14 (g++ 6.2.0)
    int ret = (B/K) - (A/K);
    
    if(A == 0 && B == 0)
    {
        ret++;
    }
    else
    {
        if(A % K == 0)
        {
            ret++;
        }
    }
    
    return ret;
}