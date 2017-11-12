#include <iostream>
#include <string>

using namespace std;


int main()
{
	int a, b, c;

	cin >> a;
	cin >> b;
	cin >> c;
	int d = a*b*c;

	string buff = std::to_string(d);

	int len = buff.length();
	int map[10] = { 0, };
	for (int i = 0; i < len; i++)
	{
		int mapIdnex = buff[i] - '0';
		map[mapIdnex] = map[mapIdnex] + 1;
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", map[i]);
	}

	return 0;
}