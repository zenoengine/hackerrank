#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a[3] = {0,};
    vector<int> alicePoints;
    vector<int> bobPoints;
    
    int point = 0;
    for(int idx = 0; idx < 3; idx++)
    {
        cin >> point;
        alicePoints.push_back(point);
    }
    
    for(int idx = 0; idx < 3; idx++)
    {
        cin >> point;
        bobPoints.push_back(point);
    }
    
    int aliceScore = 0;
    int bobScore = 0;
    
    for(int idx = 0; idx < 3; idx++)
    {
        if(alicePoints[idx] > bobPoints[idx])
        {
            ++aliceScore;
        }
        else if(alicePoints[idx] < bobPoints[idx])
        {
            ++bobScore;
        }
    }
    
    cout << aliceScore << " " << bobScore;
    return 0;
}
