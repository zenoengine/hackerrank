#include <iostream>

using namespace std;

const int MAX_ROW_COUNT = 8;
const int MAX_COL_COUNT = 8;


int FindPalindromeRow(char (&arr)[MAX_ROW_COUNT*MAX_COL_COUNT], int len)
{
    int cnt = 0;
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
                cnt++;
            }
        }
    }
    return cnt;
}

int FindPalindromeCol(char (&arr)[MAX_ROW_COUNT*MAX_COL_COUNT], int len)
{
    int cnt = 0;
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
                cnt++;
            }
        }
    }
    return cnt;
}

int main()
{
    for (int T = 1; T <= 10; T++)
    {
        char board[MAX_ROW_COUNT*MAX_COL_COUNT] = {0,};
        int len = 0;
        cin >> len;
        for(int i = 0; i < MAX_ROW_COUNT; i++)
        {
            for(int j = 0; j < MAX_COL_COUNT; j++)
            {
                cin >> board[i*MAX_ROW_COUNT+j];   
            }
        }

        cout << "#" << T << " " <<  FindPalindromeRow(board, len) + FindPalindromeCol(board, len) << endl;
    }
    return 0;   
}