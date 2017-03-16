#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::basic_ios::sync_with_stdio();

	string a;

	cin >> a;
	
	while (!a.empty())
	{
		cout << a.substr(0, 10) << endl;
		a.erase(0, 10);
	}

	return 0;
}