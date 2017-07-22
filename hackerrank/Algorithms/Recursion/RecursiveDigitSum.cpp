#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>

using namespace std;

unordered_map<string, string> memo;

string super_digit(string number)
{
    if(number.length() < 2)
    {
        return number;
    }
    
    if(memo.find(number) != memo.end())
    {
        return memo[number];
    }
    
    int sum = 0;
    for(int idx = 0; idx < number.size(); idx++)
    {
        char c = number[idx];
        sum += atoi(&c);
    }
    
    memo.insert(make_pair(number, to_string(sum)));
    
    return super_digit(memo[number]);
}

int main() {
    int sum = 0;
    char c;
    do
    {
        c = getchar();
        sum += atoi(&c);
    }
    while(c != ' ');
    
    int k;
    cin >> k;

    string firstSum = to_string(sum);
    string digitText = super_digit(firstSum);
    string finalText;
    for(int i = 0; i < k ; i++)
    {
        finalText.append(digitText);
    }
    
    cout << super_digit(finalText);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}