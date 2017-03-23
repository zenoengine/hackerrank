
#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

void Print(int x1, int y1, int r1, int x2, int y2, int r2)
{
	int distance = pow(x2 - x1, 2) + pow(y2 - y1, 2);
	int diffRadius = (r1 - r2)*(r1 - r2);
	int sumRadius = (r1 + r2)*(r1 + r2);

	if (diffRadius == 0 && distance == 0)
	{
		printf("-1\n");
	}
	else if (sumRadius == distance || diffRadius == distance)
	{
		printf("1\n");
	}
	else if (diffRadius > distance || sumRadius < distance)
	{
		printf("0\n");
	}
	else
	{
		printf("2\n");
	}
}

int main()
{
	ios::sync_with_stdio();
	int n = 0;
	cin >> n;

	int x1, y1, r1;
	int x2, y2, r2;

	while (n--)
	{
		cin >> x1 >> y1 >> r1;
		cin >> x2 >> y2 >> r2;

		Print(x1, y1, r1, x2, y2, r2);
	}

	return 0;
}