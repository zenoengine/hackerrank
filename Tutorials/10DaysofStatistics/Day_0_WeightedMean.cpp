#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iostream>
#include <iomanip>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    vector<int> w;
    vector<int> x;
    
    int count = 0;
    cin >> count;
    int inputValue  = 0;
    for(int idx =0; idx < count; idx++)
    {
        cin >> inputValue ;
        x.push_back(inputValue);
    }
    
    for(int idx =0; idx < count; idx++)
    {
        cin >> inputValue ;
        w.push_back(inputValue);
    }
    
    int sum = 0;
    int weightSum = 0;
    for(int idx=0; idx < count; idx++)
    {
        sum += w[idx]*x[idx];
        weightSum += w[idx];
    }
    
    float value = (double(sum)/weightSum);
    cout << std::fixed << setprecision(1) <<  float(value) << endl;
    return 0;
}
