#include <iostream>
#include <math.h>

using namespace std;

const int MAX_ROW_COUNT = 100;
const int MAX_COL_COUNT = 100;


int FindPalindromeMaxLenFromRow(char (&arr)[MAX_ROW_COUNT*MAX_COL_COUNT])
{
    int cnt = 0;
    int len = MAX_ROW_COUNT;

    while(len > 0)
    {
        for (int i = 0 ; i < MAX_ROW_COUNT; i++)
        {
            string line;

            for (int j = 0 ; j < MAX_COL_COUNT; j++)
            {
                line.push_back(arr[i*MAX_ROW_COUNT + j]);
            }

            for (int i = 0 ; i <= line.size() - len; i++)
            {
                bool bPalindrome = true;
                for (int j = 0; j <= len/2; j++)
                {
                    if (line[i+j] != line[i+len-j-1])
                    {
                        bPalindrome = false;
                        break;
                    }
                }

                if (bPalindrome)
                {
                    return len;
                }
            }
        }

        len -=1;
    }
    return len;
}

int FindPalindromeMaxLenFromCol(char (&arr)[MAX_ROW_COUNT*MAX_COL_COUNT])
{
    int cnt = 0;
    int len = MAX_COL_COUNT;
    
    while(len > 0)
    {
        for (int i = 0 ; i < MAX_COL_COUNT; i++)
        {
            string line;

            for (int j = 0 ; j < MAX_ROW_COUNT; j++)
            {
                line.push_back(arr[j*MAX_ROW_COUNT + i]);
            }

            for (int i = 0 ; i <= line.size() - len; i++)
            {
                bool bPalindrome = true;

                for (int j = 0; j <= len/2; j++)
                {
                    if (line[i+j] != line[i+len-j-1])
                    {
                        bPalindrome = false;
                        break;
                    }
                }

                if (bPalindrome)
                {
                    return len;
                }
            }
        }

        len -= 1;
    }
    return len;
}

int main()
{
    for (int i = 0 ; i < 10; i++)
    {
        char board[MAX_ROW_COUNT*MAX_COL_COUNT] = {0,};
        int T = 0;
        cin >> T;
        for(int i = 0; i < MAX_ROW_COUNT; i++)
        {
            for(int j = 0; j < MAX_COL_COUNT; j++)
            {
                cin >> board[i*MAX_ROW_COUNT+j];   
            }
        }

        cout << "#" << T << " " <<  max(FindPalindromeMaxLenFromRow(board), FindPalindromeMaxLenFromCol(board)) << endl;
    }
    return 0;   
}