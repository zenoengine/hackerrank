#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	getline(std::cin, str);

	bool bWordStart = false;

	int count = 0;
	int len = str.length();
	for (int i = 0; i < len; i++)
	{
		if (str[i] == ' ')
		{
			if (bWordStart)
			{
				bWordStart = false;
			}
		}
		else
		{
			if (!bWordStart)
			{
				bWordStart = true;
				count++;
			}
		}
	}

	cout << count;

	return 0;
}