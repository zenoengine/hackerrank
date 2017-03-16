#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a;
	cin >> b;

	cout.precision(10);
	cout << (long double)a / b;

	return 0;
}