// you can use includes, for example:
 #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    std::sort(A.begin(), A.end());
    
    int last = A.size() - 1;
    
    int case1 = A[last] * A[last-1] * A[last-2];
    int case2 = A[0] * A[1] * A[last];
    
    return std::max(case1, case2);
}