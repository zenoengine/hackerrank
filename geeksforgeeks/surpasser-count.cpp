#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T = 0;
    cin >> T;
    while (T--) {
        int N = 0;
        cin >> N;
        std::vector<int> A(N);
        for (int i = 0; i < N; i ++) {
            cin >> A[i];
        }

        std::vector<int> out(N);
        std::vector<int> v;
        for ( int i = N-1; i >= 0; i--) {
            for (auto el : v) {
                if  (el > A[i]) {
                    out[i]++;
                }
            }
            v.push_back(A[i]);
        }

        for (auto el : out) {
            cout << el << " ";
        }

        cout << endl;
    }

return 0;
}
