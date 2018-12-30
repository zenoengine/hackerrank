#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

struct EndOfPair
{
	unsigned long long zeroEnd = 0;
	unsigned long long oneEnd = 0;
};

map<int, EndOfPair> memo;

void Calc(int N)
{
	if (N == 1)
	{
		return;
	}

	map<int, EndOfPair>::iterator iter = memo.find(N);
	
	if(iter == memo.end())
	{
		memo.insert({ N, EndOfPair{} });
	}
	
	iter = memo.find(N);
	map<int, EndOfPair>::iterator BeforeIter = memo.find(N - 1);
	EndOfPair& endOfPair = BeforeIter->second;
	EndOfPair& curEndOfPair = iter->second;
	curEndOfPair.zeroEnd = endOfPair.oneEnd + endOfPair.zeroEnd;
	curEndOfPair.oneEnd = endOfPair.zeroEnd;
}

unsigned long long GetCount(int N)
{
	if(memo.find(N) != memo.end())
	{
		return memo[N].oneEnd + memo[N].zeroEnd;
	}

	for (int i = 1 ; i <= N; i++)
	{
		Calc(i);
	}

	return memo[N].oneEnd + memo[N].zeroEnd;
}

int main()
{
	EndOfPair initEndOfPair;
	initEndOfPair.oneEnd = 1;
	memo.insert({ 1, initEndOfPair });

	int N = 0;
	cin >> N;

	cout << GetCount(N);

	return 0;
}