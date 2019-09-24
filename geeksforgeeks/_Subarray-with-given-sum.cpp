#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    
    
    cin >> T;
    while (T--) {
        int N;
        int S;
        cin >> N >> S;
        
        vector<int> v(N);
        for(int i = 0 ; i < N; i++) {
            cin >> v[i];
        }
        
        int a,b;
        for(int i = 0; i < N; i++) {
            a = -1;
            b = -1;
            if (v[i] == S) {
                a = i + 1;
                b = i + 1;
                break;
            }
            if (v[i] > S){
                continue;
            }
            
            int curSum = 0;
            for (int start = i+1; start <= N; start++) {
                curSum = curSum + v[start-1];
                
                if (curSum > S){
                    break;
                } else if (curSum == S){
                    a = i+1;
                    b = start;
                    break;
                }
            }
            
            if (a > 0){
                break;
            }
        }
        
        if (a > 0){
            cout << a << " " << b << endl;
        }
        else{
            cout << -1 << endl;
        }
        
    }
    
    
	
	return 0;
}