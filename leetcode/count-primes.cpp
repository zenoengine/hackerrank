class Solution {
public:
    int countPrimes(int n) {
        vector<bool> v;
        v.resize(n+1);
        v[0] = true;
        v[1] = true;

        for(int i = 2; i < n; i++) {
            if (v[i] == true) {
                continue;
            }

            for(int j = 2; j*i < n; j++) {
                v[i*j] = true;
            }
        }

        int ans = 0;
        for(int i = 0 ; i < n; i++){
            if (v[i] == false){
                ans++;
            }
        }

        return ans;
    }
};