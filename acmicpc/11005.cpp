#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n = 0;
    int b = 0;
    cin >> n >> b;

    string numberString;
    while(n!=0)
    {
        numberString.push_back(n%2);
        n = n/2;
    }

    numberString.reverse();
    
    cout << numberString;

    return 0;
}