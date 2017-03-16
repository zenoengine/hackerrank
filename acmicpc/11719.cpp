#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::basic_ios::sync_with_stdio();

	string a;

	while (!getline(cin, a).eof())
	{
		cout << a << endl;
	}

	return 0;
}