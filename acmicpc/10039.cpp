#include <iostream>

using namespace std;

int main()
{
    const int MAX_NUM = 5;
    int scores[MAX_NUM] = {0,};
    
    int sum = 0;
    for (int i = 0 ; i < MAX_NUM; i++)
    {
        cin >> scores[i];
        
        if (scores[i] < 40)
        {
            scores[i] = 40;
        }
        
        sum += scores[i];
    }
    
    cout << sum / 5;
    return 0;
}