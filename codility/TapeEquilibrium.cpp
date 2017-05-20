//First Trial
//Score 50
//Correctness 100
//Performance 0%
//TimeComplexity O(N*N)

int solution(vector<int> &A) {
    
    int result = 2;
    int N = A.size();
    int min = 1000*100000;
    for(int P = 1; P < N; P++)
    {
        int sum = 0;
        for(int idx = 0; idx < N; idx++)
        {
            int coefficient = 1;
            if(idx >= P)
            {
                coefficient = -1;
            }
            
            sum += coefficient*A[idx] ;
        }
        
        if(sum < 0)
        {
            sum = -sum;
        }
        
        if(min >= sum)
        {
            min = sum;
            result = min;
        }        
    }
    
    return result;
}


//Second Trial
//Looked people comments
//Score 100
//Correctness 100
//Performance 100
//TimeComplexity O(N)

//
// void abs(int& value)
// {
//     if(value < 0)
//     {
//         value = -value;
//     }
// }

// int solution(vector<int> &A) {
//     // write your code in C++14 (g++ 6.2.0)
    
//     int leftSum = A[0];
//     int rightSum = -A[0];
    
//     for(auto value : A)
//     {
//         rightSum += value;
//     }
    
//     int N = A.size();
//     int min = abs(rightSum - leftSum);
    
//     for(int i = 1; i < N-1; i++)
//     {
//         leftSum += A[i];
//         rightSum -= A[i];
        
//         int diff = abs(rightSum - leftSum);
        
//         if(min > diff)
//         {
//             min = diff;
//         }
//     }
    
//     return min;
// }