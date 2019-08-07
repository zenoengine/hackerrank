#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

int arr[MAX_SIZE][MAX_SIZE] = { 0, };

struct Pos
{
	int x;
	int y;

	enum Direction
	{
		NONE,
		LEFT,
		RIGHT,
		UP,
	};

	Direction lastDirection = NONE;

	void backStep(const int arr[MAX_SIZE][MAX_SIZE])
	{
		if (x - 1 >= 0 && lastDirection != RIGHT)
		{
			if (arr[y][x - 1] == 1)
			{
				x--;
				lastDirection = LEFT;
				return;
			};
		}

		if (x + 1 < MAX_SIZE && lastDirection != LEFT)
		{
			if (arr[y][x + 1] == 1)
			{
				x++;
				lastDirection = RIGHT;
				return;
			}
		}

		if (y - 1 >= 0)
		{
			if (arr[y - 1][x] == 1)
			{
				y--;
				lastDirection = UP;
			}
		}
	}
};

int main()
{
	for (int T = 1; T <= 10; T++)
	{
		int caseNum = 0;
		cin >> caseNum;
		int destX, destY = 0;

		for (int i = 0; i < MAX_SIZE; i++)
		{
			for (int j = 0; j < MAX_SIZE; j++)
			{
				cin >> arr[i][j];

				if (arr[i][j] == 2)
				{
					destX = j;
					destY = i;
				}
			}
		}

		Pos destPos;
		destPos.x = destX;
		destPos.y = destY;

		while (destPos.y != 0)
		{
			destPos.backStep(arr);
		}

		cout << "#" << caseNum << " " << destPos.x << endl;
	}

	return 0;
}