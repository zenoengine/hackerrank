
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

std::vector<vector<int>> list;
std::vector<int> check;
std::queue<int> q;
std::vector<int> out;

void dfs(int node)
{
	check[node] = true;
	out.push_back(node);

	std::sort(list[node].begin(), list[node].end());

	for(auto it: list[node])
	{
		if(check[it] == false)
		{
			dfs(it);
		}	
	}
}

void printOut()
{
	for (int i = 0; i < out.size(); i++)
	{
		if (i != out.size() - 1)
		{
			printf("%d ", out[i]);
		}
		else
		{
			printf("%d\n", out[i]);
		}
	}
}

void bfs(int node)
{
	check[node] = true;
	q.push(node);
	while(!q.empty())
	{
		int n = q.front();
		out.push_back(n);
		q.pop();

		std::sort(list[n].begin(), list[n].end());
		for(auto it: list[n])
		{
			if (check[it] == false)
			{
				check[it] = true;
				q.push(it);
			}
		}
	}
	check[node] = true;

}

int main()
{
	int n, m, v = 0;
	scanf("%d %d %d", &n, &m, &v);

	list.resize(n+1);
	check.resize(n+1);

	while (m--)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		list[a].push_back(b);
		list[b].push_back(a);
	}

	dfs(v);
	printOut();
	out.clear();
	
	check.clear();
	check.resize(n+1);

	bfs(v);
	printOut();

	return 0;
}