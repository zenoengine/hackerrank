#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    	int count=0;
	cin >> count;

	
	string a;
	string b;
	bool result = false;
	while (count--)
	{
       map<char, int> charCounter;
		result = false;
		cin >> a >> b;

		for (int aIndex = 0; aIndex < a.size(); aIndex++)
		{
			charCounter[a[aIndex]] = 1;
		}

		for (int bIndex = 0; bIndex < b.size(); bIndex++)
		{
			if (charCounter[b[bIndex]] == 1)
			{
				result = true;
				break;
			}
		}

		if (result)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
    
	return 0;
}
