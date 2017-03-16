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
    
    for(int idx = n; idx > 0; idx--)
    {
        int spaceCount = idx - 1;
        int sharpCount = n - idx  + 1;
        
        for(int i = 0; i < spaceCount; i++)
        {
            cout << " " ;
        }
        
        for(int j = 0; j < sharpCount; j++)
        {
            cout << "#";
        }
        
        cout << endl;
    }
    
    return 0;
}
