#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int count = 0;
    
    cin >> count;
    
    vector<int> numbers;
    int value = 0;
    while(count--)
    {
        cin >> value;
        
        numbers.push_back(value);
    }

    long long sum = 0;
    
    for(int val : numbers)
    {
        sum += val;
    }
    
    cout << sum;
    
    return 0;
}
