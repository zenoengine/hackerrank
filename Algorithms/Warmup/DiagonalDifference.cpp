#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n = 0;
    cin >> n;
    
    vector<int> numbers;
    
    int value = 0;
    for(int idx = 0; idx < n*n; idx++)
    {
        cin >> value;
        numbers.push_back(value);
    }
    
    int firstSum=0;
    int secondSum = 0;
    int col = 0;
    for(int row = 0 ; row < n; row++)
    {
        firstSum += numbers[row*n + col];
        col++;
    }
    
    col = n - 1;
    for(int row = 0 ; row < n; row++)
    {
        secondSum += numbers[row*n + col];
        col --;
    }
    
    cout << abs(firstSum-secondSum);
    
    return 0;
}
