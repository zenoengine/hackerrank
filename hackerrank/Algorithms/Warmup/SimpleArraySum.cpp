#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    int value = 0;
    int sum = 0;
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> value;
        sum += value;
    }
    
    cout << sum;
    return 0;
}
