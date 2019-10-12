#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

map<int, int> aptCntByGRoup;
struct Apt {
	int value = 0;
	bool bVisit = false;
	Apt() {};
};

void GiveGroupNumber(vector<vector<Apt>> & map, int x, int y, int groupId) {
	if (x >= map.size() || y >= map.size() || x < 0 || y < 0) {
		return;
	}
	if (map[x][y].bVisit || map[x][y].value == 0) {
		return;
	}

	map[x][y].value = groupId;
	map[x][y].bVisit = true;
	if (aptCntByGRoup.find(groupId) == aptCntByGRoup.end()) {
		aptCntByGRoup.insert(make_pair(groupId, 0));
	}
	aptCntByGRoup[groupId] += 1;
	GiveGroupNumber(map, x + 1, y, groupId);
	GiveGroupNumber(map, x - 1, y, groupId);
	GiveGroupNumber(map, x, y + 1, groupId);
	GiveGroupNumber(map, x, y - 1, groupId);
}

int main() {
	int N = 0;
	cin >> N;

	vector<vector<Apt>> m(N);
	for (auto& v : m) { v.resize(N); }


	for (int i = 0; i < N; i++) {
		string line;
		cin >> line;

		for (int j = 0; j < line.size(); j++) {
			m[i][j].value = line[j] - '0';
		}
	}

	int uid = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (m[i][j].value == 0) {
				continue;
			}

			uid++;

			GiveGroupNumber(m, i, j, uid);
		}
	}

	cout << aptCntByGRoup.size() << endl;
	std::vector<int> sortedArr;
	for (auto iter : aptCntByGRoup) {
		sortedArr.push_back(iter.second);
	}
	sort(sortedArr.begin(), sortedArr.end());
	for(auto i : sortedArr){
		cout << i << endl;
	}
	return 0;
}
