// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

// O(N**2)
int solution1(vector<int> &A) {
    
    vector<int> acc(A.size());
    
    acc[0] = A[0];
    for(int i = 1 ; i < A.size(); i++)
    {
        acc[i] = acc[i-1] + A[i];   
    }
    
    float minAvgStartIdx = 0;
    float minAvg = (float)acc[A.size()-1]/acc.size();
    
    for(int startIdx = 0; startIdx < acc.size(); startIdx++)
    {
        for(int endIdx = startIdx+1; endIdx < acc.size(); endIdx++)
        {
            float avg = float((acc[endIdx] - acc[startIdx]) + A[startIdx]) / ((endIdx - startIdx) + 1);
            if(avg < minAvg)
            {
                minAvg = avg;
                minAvgStartIdx = startIdx;
            }
        }   
    }
    return minAvgStartIdx;
}

// O(N)
int solution2(vector<int> &A) {
    
    int minAvgIdx = 0;
    float minAvg = float(A[0] + A[1]) / 2;
    for(int i = 1 ; i < A.size(); i++)
    {
        float avg = float(A[i] + A[i-1]) / 2;
        if(avg < minAvg)
        {
            minAvg = avg;
            minAvgIdx = i - 1;
        }
        
        if(i > 1)
        {
            avg = float(A[i] + A[i-1] + A[i-2]) / 3;
            
            if(avg < minAvg)
            {
                minAvg = avg;
                minAvgIdx = i - 2;
            }   
        }
    }
    
    return minAvgIdx;
}