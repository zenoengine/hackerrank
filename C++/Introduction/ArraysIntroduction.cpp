#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int max = 0;

    cin >> max;

    int *arr = new int[max];

    int value = 0;
    for (int idx = 0; idx < max; idx++)
    {
        cin >> value;
        arr[(max - 1) - idx] = value;
    }

    for (int idx = 0; idx < max; idx++)
    {
        cout << arr[idx] << " ";
    }

    return 0;
}
