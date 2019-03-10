#include <iostream>
#include <queue>
#include <set>

using namespace std;
struct Node
{
	int x = 0;
	int y = 0;
	int count = 0;
};

bool mage[100 + 1][100 + 1];
bool chk[100 + 1][100 + 1] = {0,};

queue<Node> q;
bool IsValidPos(Node const & pos, int m, int n)
{
	if(pos.x < 0 || pos.x > m)
	{
		return false;
	}

	if(pos.y < 0 || pos.y > n)
	{
		return false;
	}

	return mage[pos.y][pos.x];
} 

int main()
{
	int n,m;
	cin >> n >> m;
	for(int i = 0 ; i < n; i++)
	{
		string str;
		cin >> str;
		
		for(int j = 0 ; j < str.size(); j++)
		{
			if (str[j] == '1')
			{
				mage[i][j] = true;
			}
			else
			{
				mage[i][j] = false;
			}
		}
	}

	Node startPos = {0, 0, 0};
	q.push(startPos);
	int result = 0;
	while(!q.empty())
	{
		Node curPos = q.front();

		q.pop();
		
		if (chk[curPos.y][curPos.x] == true)
		{
			continue;
		}
		
		chk[curPos.y][curPos.x] = true;
		curPos.count += 1;
		
		if (curPos.y == n-1 && curPos.x == m-1)
		{
			result = curPos.count;
			break;
		}

		Node left,right,top,bottom;
		left = {curPos.x - 1, curPos.y, curPos.count};
		right = {curPos.x + 1, curPos.y, curPos.count};
		top = {curPos.x, curPos.y - 1, curPos.count};
		bottom = {curPos.x, curPos.y + 1, curPos.count};

		if(IsValidPos(left, m, n))
		{
			q.push(left);
		}
		if(IsValidPos(right, m, n))
		{
			q.push(right);
		}
		if(IsValidPos(top, m, n))
		{
			q.push(top);
		}
		if(IsValidPos(bottom, m, n))
		{
			q.push(bottom);
		}
	}

	cout << result;

	return 0;
}
