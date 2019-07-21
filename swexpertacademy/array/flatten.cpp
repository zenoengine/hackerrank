#include <iostream>

using namespace std;

bool FindMinMaxIndex(int (&arr)[100], int &maxIdx, int &minIdx)
{
    maxIdx = 0;
    minIdx = 0;

    for(int i = 0 ; i < 100; i++)
    {
        if (arr[i] > arr[maxIdx])
        {
            maxIdx = i;
        }
        if(arr[i] < arr[minIdx])
        {
            minIdx =i;
        }
    }
    
    return arr[maxIdx] - arr[minIdx] > 0;
}

int main()
{
    for (int T = 1; T <=10; T++)
    {
        int dumpCnt = 0;
        cin >> dumpCnt;

        int arr[100] = {0,};
        for (int i = 0 ; i < 100; i++)
        {
            cin >> arr[i];
        }

        int maxIdx = 0;
        int minIdx = 0;
        for(int i = 0 ; i < dumpCnt; i++)
        {
            if (FindMinMaxIndex(arr, maxIdx, minIdx))
            {
                arr[maxIdx] -= 1;
                arr[minIdx] += 1;
            }
            else
            {
                break;
            }
        }
        
        FindMinMaxIndex(arr, maxIdx, minIdx);
        cout << "#" << T << " "  << arr[maxIdx] - arr[minIdx] << endl;
    }

    return 0;
}