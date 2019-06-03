#include <iostream>

using namespace std;

int main()
{
    int T;
    
    cin >> T;
    
    while(T--)
    {
        std::string input;
        cin >> input;
        
        int score = 0;
        int seqCount = 0;
        for (int i = 0; i < input.size(); i++)
        {
            if (input[i] == 'O')
            {
                seqCount++;
                score += seqCount;
            }
            else
            {
                seqCount = 0;
            }
        }
        
        cout << score << endl;
    }

    return 0;
}