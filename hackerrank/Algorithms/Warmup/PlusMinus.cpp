#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n = 0 ;
    
    cin >> n;
     
    vector<int> numbers;
    int temp = 0;
    while(n--)
    {
        cin >> temp;
        numbers.push_back(temp);
    }
    
    int positive = 0;
    int negative = 0;
    int zeroes =0;
    for(int  number : numbers)
    {
        if(number > 0)
        {
            positive ++ ;
        }
        else if(number < 0)
        {
          negative++;  
        }
        else
        {
            zeroes++;
        }
    }
    
    int total = numbers.size();
    
    printf("%f\n", float(positive)/total);
    printf("%f\n", float(negative)/total);
    printf("%f\n", float(zeroes)/total);
    
    return 0;
}