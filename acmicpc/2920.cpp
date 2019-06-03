#include <iostream>

using namespace std;

int main()
{
    const int MAX_NUM = 8;
    int arr[MAX_NUM] = {0,};
    
    for(int i = 0 ; i < MAX_NUM; i++)
    {
        cin >> arr[i];
    }
    
    int asc[MAX_NUM] = {0,};
    int des[MAX_NUM] = {0,};
    
    int ascCnt = 0;
    int desCnt = 0;
    for (int i = 0 ; i < MAX_NUM; i++)
    {
        asc[i] = i+1;
        des[i] = MAX_NUM - i;
        
        if(arr[i] == asc[i])
        {
            ascCnt++;
        }
        
        if(arr[i] == des[i])
        {
            desCnt++;
        }
    }
    
    if(ascCnt == MAX_NUM)
    {
        cout << "ascending" << endl;
    }
    else if(desCnt == MAX_NUM)
    {
        cout << "descending" << endl;
    }
    else
    {
        cout << "mixed" << endl;
    }
    
    return 0;
}