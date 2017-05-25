/*
문제 1.- 히트맨 이태형

전세계에 소문난 살인청부업자인 이태형은 한 알고리즘 모임의 몰살을 의뢰받았다. 평소 알고리즘에 원한이 많았던 태형이는 특정한 알고리즘에 따라 모임원들을 죽이려고 한다.

N명의 사람이 원형의 테이블에 앉아있다.

• 첫번째 사람부터 순서를 세어, K번째 사람을 제거한다.
• 남은 N - 1명에서 다음 사람부터 다시 순서를 세어 K번째 사람을 제거한다.
• 두번째 규칙을 반복할때 마지막에 제거되는 사람의 번호를 출력하시오.


- 입력 방식
첫번째 줄에 N과 K가 자연수로 주어진다.

- 출력 방식
마지막에 제거되는 사람의 번호를 출력한다.

입력
7 4

출력
2

힌트 (제거되는 순서)
4 1 6 5 7 3 2
*/


#include <iostream>
#include <queue>


using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;

	queue<int> que;

	for (int idx = 1; idx <= n; idx++)
	{
		que.push(idx);
	}

	int count = 0;
	while (que.size() > 1)
	{
		int frontValue = que.front();
		que.pop();

		count++;
		if (count == k)
		{
			count = 0;
		}
		else
		{
			que.push(frontValue);
		}
	}

	cout << que.front();

	return 0;
}