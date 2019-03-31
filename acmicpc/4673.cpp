#include <iostream>

using namespace std;

int SelfNumber(int d)
{
    int ret = d;
    std::string str = to_string(d);

    for(unsigned int i = 0 ; i < str.size(); i++)
    {
        ret += str[i] - '0';
    }
    return ret;
}
int main()
{
    bool notSelf[10000] = {0,};
    for(int i = 0 ; i < 10000; i++)
    {
        int idx = SelfNumber(i);
        if(idx < 10000)
        {
            notSelf[idx] = true;
        }
    }

    for(int i = 0 ; i < 10000; i++)
    {
        if (notSelf[i] == false)
        {
            cout << i << "\n";
        }
    }

    return 0;
}