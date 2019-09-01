#include <iostream>

using namespace std;

int pow(int val, int count)
{
    if (count == 1)
    {
        return val;
    }

    return val*pow(val, --count);
}

int main()
{
    int T = 0;
    int num = 0;
    int cnt = 0;

    for (int i = 0; i < 10; i++)
    {
        cin >> T;
        cin >> num >> cnt;
        cout << "#" << T << " ";
        cout << pow(num, cnt) << endl;
    }

    return 0;
} 