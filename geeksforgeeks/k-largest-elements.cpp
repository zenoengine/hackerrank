#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N;
        int C;
        cin >> N >> C;
        
        std::vector<int> v;
        v.resize(N);
        for(int idx = 0 ; idx < N; idx++) {
            cin >> v[idx];
        }
        
        // sort
        std::sort(v.begin(), v.end());
        
        //print numer
        int count = 0;
        for (auto it = v.rbegin(); it != v.rend(); it++) {
            cout << *it << " "; 
            count++;
            if (count >= C) {
                break;
            }
        }
        cout << endl;
    }
    return 0;
}
