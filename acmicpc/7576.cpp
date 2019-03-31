#include <iostream>
#include <queue>

using namespace std;

int M, N = 0;
const int MAX_SIZE = 1000;
int to[MAX_SIZE][MAX_SIZE] = {0,};

struct Node
{
	int x,y = 0;
	int day = 0;

	bool OverBoundCheck(int M, int N)
	{
		if(x < 0 || x >= M)
		{
			return true;
		}

		if (y < 0 || y >= N)
		{
			return true;
		}

		if (to[y][x] == -1)
		{
			return true;
		}

		return false;
	}
};

queue<Node> q;

void InsertNextStep(Node t)
{
	Node up = t;
	Node down = t;
	Node left = t;
	Node right = t;
	
	up.y--;
	if(!up.OverBoundCheck(M, N))
	{
		q.push(up);
	}

	down.y++;
	if(!down.OverBoundCheck(M, N))
	{
		q.push(down);
	}
	
	left.x--;
	if(!left.OverBoundCheck(M, N))
	{
		q.push(left);
	}
	
	right.x++;
	if(!right.OverBoundCheck(M, N))
	{
		q.push(right);
	}		
}

int main()
{
	cin >> M >> N;

	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
		{
			cin >> to[i][j];
			if (to[i][j] == 1)
			{
				Node n;
				n.y = i;
				n.x = j;
				InsertNextStep(n);
			}
		}
	}

	int maxDay = 0;
	while(!q.empty())
	{
		Node t = q.front();
		q.pop();
		if (to[t.y][t.x] == -1 || to[t.y][t.x] == 1)
		{
			continue;
		}

		if (to[t.y][t.x] == 0)
		{
			to[t.y][t.x] = 1;
		}

		t.day += 1;

		if (maxDay < t.day)
		{
			maxDay = t.day;
		}

		InsertNextStep(t);
	}

	bool bComplete = true;
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
		{
			if (to[i][j] == 0)
			{
				bComplete = false;
				break;
			}
		}
	}

	if (!bComplete)
	{
		maxDay = -1;
	}

	cout << maxDay;

	return 0;
}