#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

float GetMedian(vector<int> &list)
{
    float median = 0;
    std::sort(list.begin(), list.end());
    size_t size = list.size();
    if (size % 2 == 0)
    {
        median = float(list[size / 2] + list[size / 2 - 1]) / 2;
    }
    else
    {
        median = list[size / 2];
    }

    return median;
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n = 0;
    cin >> n;

    vector<int> list;
    vector<int> lowerList;
    vector<int> upperList;

    while (n--)
    {
        int i = 0;
        cin >> i;
        list.push_back(i);
    }

    float q2 = GetMedian(list);

    for (int number : list)
    {
        if (number < q2)
        {
            lowerList.push_back(number);
        }

        if (number > q2)
        {
            upperList.push_back(number);
        }
    }

    float q1 = GetMedian(lowerList);
    float q3 = GetMedian(upperList);

    cout << q1 << endl;
    cout << q2 << endl;
    cout << q3 << endl;

    return 0;
}