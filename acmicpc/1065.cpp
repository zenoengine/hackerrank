#include <iostream>

using namespace std;

bool IsHan(int d) 
{
    bool bSameDiff = true;
    std::string str = to_string(d);
    
    int prev = 0;
    int prevDiff , diff = 0;
    if(str.size() >= 2)
    {
        prevDiff = str[1] - str[0];
    }
    for(unsigned int i = 1 ; i < str.size(); i++)
    {
        diff = str[i] - str[i-1];
        if(prevDiff != diff)
        {
            bSameDiff = false;
            break;
        }
        prevDiff = diff;
    }

    return bSameDiff;
}

int main()
{
    int N = 0;
    cin >> N;

    int cnt = 0;
    for(int i = 1; i <= N; i++)
    {
        if (IsHan(i))
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}