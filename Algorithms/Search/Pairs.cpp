
#include <map>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, k = 0;
    cin >> n;
    cin >> k;

    map<int, int> nums;
    int tempN = n;
    while (tempN--)
    {
        int value = 0;
        cin >> value;

        nums.insert(make_pair(value, 0));
    }

    int c = 0;
    for (auto iter : nums)
    {
        if (nums.find(iter.first + k) != nums.end())
        {
            c++;
        }

        if (nums.find(iter.first - k) != nums.end())
        {
            c++;
        }
    }

    cout << c / 2;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
