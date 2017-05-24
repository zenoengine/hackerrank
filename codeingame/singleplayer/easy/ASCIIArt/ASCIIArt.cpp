#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
 
int FindAlphabetIndex(char value)
{
    char base = 'A';
    int index = 0 ;
    
    char capValue = toupper(value);
    
    if( capValue < 'A' || capValue > 'Z')
    {
        return 'Z' - 'A' + 1;
    }
    
    while( base + index - capValue != 0 )
    {
        index++;
    }
    
    return index;
}

int main()
{
    int L;
    cin >> L; cin.ignore();
    int H;
    cin >> H; cin.ignore();
    string T;
    getline(cin, T);
    
    vector<string> alphabet;
    //char* pChar = new char[L*H];
    for (int i = 0; i < H; i++) {
        string ROW;
        getline(cin, ROW);
        alphabet.push_back(ROW);
    }
    
    vector<int> startPoses;
    for(int k = 0 ; k < T.length(); k++)
    {
        int index = FindAlphabetIndex(T[k]);
        int startPos = index*L;
        startPoses.push_back(startPos);
    }
    
    for(int line = 0 ; line < H; line++)
    {
        string onelineString;
        for(int posIdx = 0 ; posIdx < startPoses.size(); posIdx++)
        {
            int startPos = startPoses[posIdx];
            for(int j = 0 ; j < L; j++ )
            {
                onelineString += alphabet[line][j + startPos];
            }
        }
         cout << onelineString << endl;
    }
}