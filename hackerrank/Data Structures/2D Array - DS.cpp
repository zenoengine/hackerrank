#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
    int sumArr[16] = { 0, };
	for (int i = 0; i < 16; i++)
	{
		int rowIndex = i % 4;
		int colIndex = i / 4;

        sumArr[i] = 0;
        
		//Top
		sumArr[i] += arr[rowIndex][colIndex];
		sumArr[i] += arr[rowIndex][colIndex + 1];
		sumArr[i] += arr[rowIndex][colIndex + 2];

		//Middle
		sumArr[i] += arr[rowIndex + 1][colIndex + 1];

		//Bot
		sumArr[i] += arr[rowIndex + 2][colIndex];
		sumArr[i] += arr[rowIndex + 2][colIndex + 1];
		sumArr[i] += arr[rowIndex + 2][colIndex + 2];
	}

	int max = sumArr[0];
	for (int i = 0; i < 16; i++)
	{
        cout << sumArr[i] << endl;
		if (max < sumArr[i])
		{
			max = sumArr[i];
		}
	}

	return max;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
