
#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

int arr[MAX_SIZE][MAX_SIZE] = { 0, };

struct Pos
{
	int x = 0;
	int y = 0;
	int stepCount = 0;

	enum Direction
	{
		NONE,
		LEFT,
		RIGHT,
		UP,
		DOWN,
	};

	Direction lastDirection = NONE;

	void step(const int arr[MAX_SIZE][MAX_SIZE])
	{
		stepCount++;

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

		if (y + 1 < MAX_SIZE)
		{
			if (arr[y + 1][x] == 1)
			{
				y++;
				lastDirection = DOWN;
				return;
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

		for (int i = 0; i < MAX_SIZE; i++)
		{
			for (int j = 0; j < MAX_SIZE; j++)
			{
				cin >> arr[i][j];
			}
		}

		int minStepStartPosX = 0;
		int minStepCount = MAX_SIZE * MAX_SIZE;
		for (int i = 0; i < MAX_SIZE; i++)
		{
			if (arr[0][i] == 0)
			{
				continue;
			}

			Pos startPos;
			startPos.x = i;
			startPos.y = 0;

			while (startPos.y != MAX_SIZE - 1)
			{
				startPos.step(arr);
			}

			if (minStepCount >= startPos.stepCount)
			{
				minStepCount = startPos.stepCount;
				minStepStartPosX = i;
			}
		}

		cout << "#" << caseNum << " " << minStepStartPosX << endl;
	}

	return 0;
}