#include <iostream>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int T = 0;
    cin >> T;
    while(T--)
    {
        int a, b = 0;
        cin >> a >> b;
        cout << a+b << "\n";
    }
    
    return 0;
}