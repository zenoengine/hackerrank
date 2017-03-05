
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void Perform(vector<int>& buffer)
{
	int last = buffer.back();
	buffer.pop_back();

	buffer.insert(buffer.begin(), last);
}

int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	vector<int> buffer;

	int m = 0;
	int k = 0;
	int q = 0;
	int i = 0;

	cin >> m >> k >> q;

	while (m--)
	{
		cin >> i;
		buffer.push_back(i);
	}

	while (k--)
	{
		Perform(buffer);
	}

	while (q--)
	{
		cin >> i;
		cout << buffer[i] << endl;
	}

	return 0;
}
