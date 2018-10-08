// O(N^2)
#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

/*
// Complete the minimumSwaps function below.
int minimumSwaps(vector<int> arr) 
{
    int min = 1;
    int cnt = 0;
    for(int i = 0 ; i < arr.size() && min < arr.size(); i++)
    {
        if (min == arr[i])
        {
            if (i == min - 1)
            {
                min++;
                i = 0;
                continue;
            }
            
            int temp = arr[min - 1];
            arr[min - 1] = arr[i];
            arr[i] = temp;
            cnt ++;
            min++;
            i = 0;
        }
    }

    return cnt;
}
*/

// O(NLogN)
// Complete the minimumSwaps function below.
int minimumSwaps(vector<int> arr) 
{
    set<int> s; // arr set for ascending
    map<int, int> m; //index map
    for(int i = 0 ; i < arr.size(); i++)
    {
        s.insert(arr[i]);
        m.insert(make_pair(arr[i], i));
    }
    
    int cnt = 0;
    for(int i = 0 ; i < arr.size(); i++)
    {
        int targetValue = *s.begin();
        if (targetValue != arr[i])
        {
            int targetIndex = m[targetValue];
            int temp = arr[i];
            arr[i] = arr[targetIndex];
            arr[targetIndex] = temp;
            
            cnt++;
            
            m[targetValue] = i;
            m[temp] = targetIndex;
            cout << endl;
        }
        
        s.erase(s.begin());
    }
    
    return cnt;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    int res = minimumSwaps(arr);

    fout << res << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}

