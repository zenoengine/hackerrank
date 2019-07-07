#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

//Boyer-Moore algorithm
int main()
{
	int T = 10;
	while (T--)
	{
		int N = 0;
		cin >> N;
		string f, p;
		cin >> f;
		cin >> p;
		unordered_set<char> s;
		for (char c : f)
		{
			s.insert(c);
		}

		int matchCnt = 0;
		for (int pIdx = 0; pIdx < p.size();)
		{
			int skipCnt = 1;
			bool bSame = true;
			int faultIdx = 0;
			for (int fIdx = f.size() - 1; fIdx >= 0;)
			{
				int cIdx = pIdx + fIdx;
				if (cIdx > p.size())
				{
					bSame = false;
					break;
				}

				if (f[fIdx] != p[cIdx])
				{
					if (s.find(p[cIdx]) != s.end())
					{
						for (int idx = 0; idx < f.size()-1; idx++)
						{
							if (f[idx] == p[cIdx])
							{
								skipCnt = f.size() - (idx+1);
							}
						}
					}
					bSame = false;
					break;
				}
				fIdx--;
			}

			if (bSame == true)
			{
				matchCnt++;
			}

			pIdx += skipCnt;
		}

		cout << "#" << N << " " << matchCnt << endl;
	}

	return 0;
}