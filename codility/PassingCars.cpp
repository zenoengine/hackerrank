// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    int cnt = 0;
    int inc = 0;
    // write your code in C++14 (g++ 6.2.0)
    for (unsigned int i = 0; i < A.size(); i++)
    {
        if (A[i] == 0)
        {
            inc++;   
        }
        else
        {
            cnt += inc;   
        }
    }
    
    if (cnt > 1000000000 || cnt < 0)
    {
        return -1;
    }
    
    return cnt;
}