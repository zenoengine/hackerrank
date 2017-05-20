#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
	int B;
	string N;
	cin >> N >> B;

	int len = N.size();
	int result = 0;
    
	for (int i = 0; i < N.size(); i++)
	{
		if (N[i] >= 'A' && N[i] <= 'Z')
		{
			result += (N[i] - 'A' + 10) * pow(B, len - (i + 1) );
		}
		else
		{
			result += (N[i] - '0')* pow(B, len - (i + 1));
		}
	}

	cout << result;

	return 0;
}