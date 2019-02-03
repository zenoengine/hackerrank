// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(string &S, vector<int> &P, vector<int> &Q) {
	// write your code in C++14 (g++ 6.2.0)
	vector<int> CountA(S.size());
	vector<int> CountC(S.size());
	vector<int> CountG(S.size());
	vector<int> CountT(S.size());

	//N
	for (int i = 0; i < S.size(); i++)
	{
		if (i > 0)
		{
			CountA[i] = CountA[i - 1];
			CountC[i] = CountC[i - 1];
			CountG[i] = CountG[i - 1];
			CountT[i] = CountT[i - 1];
		}

		switch (S[i])
		{
		case 'A': CountA[i] += 1; break;
		case 'C': CountC[i] += 1; break;
		case 'G': CountG[i] += 1; break;
		case 'T': CountT[i] += 1; break;
		}
	}

	std::vector<int> result(P.size());
	// M
	for (int i = 0; i < P.size(); i++)
	{

		int startIdx = P[i];
		int endIdx = Q[i];

		int value = 0;


		switch (S[startIdx])
		{
		case 'A': value = 1; break;
		case 'C': value = 2; break;
		case 'G': value = 3; break;
		case 'T': value = 4; break;
		}

		if (CountA[startIdx] != CountA[endIdx])
		{
			value = 1;
		}
		else if (CountC[startIdx] != CountC[endIdx])
		{
			if (value > 1)
			{
				value = 2;
			}
		}
		else if (CountG[startIdx] != CountG[endIdx])
		{
			if (value > 2)
			{
				value = 3;
			}
		}
		else if (CountT[startIdx] != CountT[endIdx])
		{
			if (value > 3)
			{
				value = 4;
			}
		}

		result[i] = value;
	}
	return result;
}