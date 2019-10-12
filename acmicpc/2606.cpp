#include <iostream>
#include <vector>

using namespace std;
struct Node {
	vector<int> con;
	bool bVisit = false;
};

int GetInfectedNodeCount(vector<Node>& nodes, int id) {
	Node& node = nodes[id];
	if (node.bVisit) {
		return 0;
	}
	node.bVisit = true;

	int cnt = 1;
	for (auto con_id : node.con) {
		cnt += GetInfectedNodeCount(nodes, con_id);
	}
	return cnt;
}

int main() {
	int N = 0;
	cin >> N;
	vector<Node> nodes(N + 1);
	int Count = 0;
	cin >> Count;
	for (int i = 0; i < Count; i++) {
		int start, end;
		cin >> start >> end;
		nodes[start].con.push_back(end);
		nodes[end].con.push_back(start);
	}
	Node s;
	int cnt = 0;
	nodes[1].bVisit = true;
	for (auto id : nodes[1].con) {
		cnt += GetInfectedNodeCount(nodes, id);
	}

	cout << cnt << endl;

	return 0;
}