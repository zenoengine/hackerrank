#include <iostream>

using namespace std;

int Calc(int n)
{
    if(n < 0)
    {
        return 0;
    }

    if(n == 1 || n == 0)
    {
        return 1;
    }

    int count = 0;

    count += Calc(n-1);
    count += Calc(n-2);
    count += Calc(n-3);

    return count;
} 

int main()
{
    int t = 0;

    cin >> t;

    while(t--)
    {
        int n = 0;
        cin >> n;
        cout << Calc(n) << endl;
    }

    return 0;
}