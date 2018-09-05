#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

float GetMdedian(vector<int>& v, int begin, int end)
{
    int size = (end - begin) + 1;
    int idx = begin;
    
    if (size % 2 == 0)
    {
        idx += (size/2 - 1);
        return float(v[idx] + v[idx+1]) / 2;
    }
    
    idx += size/2;
    return v[idx];
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n = 0;
    cin >> n;
    
    vector<int> X(n);
    vector<int> F(n);
    
    for(int i = 0 ; i < n; i++)
    {
        cin >> X[i];
    }
    
    for(int i = 0 ; i < n; i++)
    {
        cin >> F[i];
    }
    
    map<int, int> m;
    
    for(int i = 0 ; i < n; i++)
    {
        if ( m.find(X[i]) == m.end() )
        {
            m.insert(make_pair(X[i],F[i]));
        }
        else
        {
            m[X[i]] += F[i];
        }
        
    }
    
    vector<int> v;
    
    for(auto iter : m)
    {
        for(int i = 0 ; i < iter.second; i++)
        {
            v.push_back(iter.first);   
        }
    }
    
    bool bEven = (v.size() % 2) == 0;
    float Q1 = 0;
    float Q3 = 0;
    if (bEven)
    {
        Q1 = GetMdedian(v, 0, v.size()/2 - 1);
        Q3 = GetMdedian(v, v.size()/2, v.size() - 1);
    }
    else
    {
        Q1 = GetMdedian(v, 0, v.size() / 2 - 1);
        Q3 = GetMdedian(v, v.size() / 2 + 1, v.size() - 1);
    }
    
    printf("%.1f", Q3 - Q1);
    
    return 0;
}
