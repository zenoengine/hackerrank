#include <iostream>

using namespace std;

int main()
{
    
    int T =  0;
    cin >> T;
    while (T--)
    {
        int caseNum = 0;
        cin >> caseNum;

        int scoreArr[100+1] = {0,};

        int score = 0;
        for (int studentNum = 0; studentNum < 1000; studentNum++)
        {
            cin >> score;
            
            scoreArr[score] += 1;
        }

        int maxScoreCount = 0;
        int maxScore =0;
        for (int score = 0 ; score < 100; score++)
        {
            int curScoreCount = scoreArr[score];
            if (maxScoreCount < curScoreCount)
            {
                maxScore = score;
                maxScoreCount = curScoreCount;
            }            
        }

        cout << "#" << caseNum << " " << maxScore << endl;
    }
    
    return 0;
}