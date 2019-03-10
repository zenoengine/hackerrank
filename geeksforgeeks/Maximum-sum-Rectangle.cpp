// https://practice.geeksforgeeks.org/problems/maximum-sum-rectangle/0#ExpectOP

#include <iostream>

using namespace std;

int main()
{
	int T;
	cin >> T;
	while (T)
	{
		int R, C;
		cin >> R >> C;

		int * arr = new int[R*C];
		int * memo = new int[R*C];
		for (int i = 0; i < R*C; i++)
		{
			cin >> arr[i];
		}

		// memo
		for (int i = 0; i < R; i++)
		{
			for (int j = 0; j < C; j++)
			{
				memo[i*C + j] = arr[i*C + j];
				if (j > 0)
				{
					memo[i*C + j] += memo[i*C + (j - 1)];
				}
			}
		}

		int maxSum = 0;
		int sum = 0;

		for (int startY = 0; startY < R; startY++)
		{
			for (int startX = 0; startX < C; startX++)
			{
				for (int endX = startX; endX < C; endX++)
				{
					int rectSum = 0;
					for (int endY = startY; endY < R; endY++)
					{
						if(startX > 0)
						{
							rectSum += memo[endY*C + endX] - memo[endY*C + startX - 1];
						}
						else
						{
							rectSum += memo[endY*C + endX];
						}

						if (maxSum < rectSum)
						{
							maxSum = rectSum;
						}
					}
				}
			}
			sum = 0;
		}
		
		cout << maxSum << endl;

		if (arr)
		{
			delete[] arr;
			arr = nullptr;
		}
		if (memo)
		{
			delete[] memo;
			memo = nullptr;
		}
	}

	return 0;
}

//// BFS Timeout
// #include <iostream>
// #include <queue>
// #include <vector>

// using namespace std;

// struct Node
// {
//     int startX = 0;
//     int startY = 0;
//     int endX = 0;
//     int endY = 0;
// };

// int main() {
// 	//code
// 	int T = 0;
// 	cin >> T;
	
//     vector<int> arr;
// 	while(T--)
// 	{
// 	    int N, M = 0;
// 	    cin >> N >> M;
	    
//         if(N*M > arr.size())
//         {
//             arr.resize(N*M);
//         }

// 	    for(int i = 0 ; i < N; i++)
// 	    {
// 	        for(int j = 0; j < M; j++)
// 	        {
// 	            int k = 0;
// 	            cin >> k;
// 	            arr[i*M + j] = k;
// 	        }
// 	    }
	    
// 	    int maxSum = arr[0];
// 	    queue<Node> q;
// 	    Node s;
	    
//         // push the start points
// 	    for (int i = 0 ; i < N; i++)
// 	    {
// 	        for (int j = 0 ; j < M; j++)
// 	        {
// 	            s.startX = j;
// 	            s.startY = i;
// 	            q.push(s);        
// 	        }
// 	    }
	    
// 	    while (!q.empty())
// 	    {
// 	        Node& cur = q.front();
//             // bound check
// 	        if (cur.endX >= M || cur.endY >= N)
// 	        {
// 	            q.pop();
// 	            continue;
// 	        }
	        
//             // Brute Force
// 	        int sum = 0;
// 	        for(int i = cur.startY ; i <= cur.endY; i++)
// 	        {
// 	            for (int j = cur.startX; j <= cur.endX; j++)
// 	            {
// 	               sum += arr[i*M + j];
// 	            }
// 	        }

// 	        if (maxSum < sum)
// 	        {
// 	            maxSum = sum;
// 	        }
	        
// 	        q.pop();
	       
// 	       // expand
// 	        Node nr = cur;
// 	        nr.endX = cur.endX + 1;
// 	        q.push(nr);
	        
// 	        Node nb = cur;
// 	        nb.endY = cur.endY +1;
// 	        q.push(nb);
	        
// 	        Node nrb = cur;
// 	        nrb.endX = cur.endX +1;
// 	        nrb.endY = cur.endY +1;
// 	        q.push(nrb);
// 	    }
	    
// 	    cout << maxSum << endl;
//  	}
// 	return 0;
// }