
#include <iostream>
#include <queue>

using namespace std;

struct Node
{
	int value;
	int depth;
};

deque<Node> que;

int main()
{
	std::ios::sync_with_stdio();

	int x;
	cin >> x;
	Node node;
	node.value = x;
	node.depth = 0;
	que.push_back(node);

	int depth = 0;
	Node CurrentNode = node;
	Node NextNode = CurrentNode;
	while (x != 1)
	{
		CurrentNode = que.front();
		que.pop_front();

		x = CurrentNode.value;
		depth = CurrentNode.depth;
		NextNode.depth = CurrentNode.depth + 1;

		if (x % 3 == 0)
		{
			NextNode.value = CurrentNode.value / 3;
			que.push_back(NextNode);
		}

		if (x % 2 == 0)
		{
			NextNode.value = CurrentNode.value / 2;
			que.push_back(NextNode);
		}

		NextNode.value = CurrentNode.value - 1;
		que.push_back(NextNode);
	}

	cout << depth;

	return 0;
}