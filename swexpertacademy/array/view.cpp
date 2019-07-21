#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    for (int T = 1; T <= 10; T++)
    {
        int bInfo[1000 + 4] = {0,};
        int buildCount = 0;
        cin >> buildCount;

        for (int i = 0; i < buildCount; i++)
        {
            cin >> bInfo[i];
        }

        int cnt = 0;
        for (int i = 2; i < buildCount; i++)
        {
            int height = bInfo[i];
            int lMax = max(bInfo[i - 1], bInfo[i - 2]);
            int rMax = max(bInfo[i + 1], bInfo[i + 2]);
            
            if (height > lMax && height > rMax)
            {
                int lrMax = max(lMax,rMax);
                cnt += height - lrMax;
            }
        }

        cout << "#" << T << " " << cnt << endl;
    }
    return 0;
}