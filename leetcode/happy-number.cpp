class Solution {
public:
    bool isHappy(int n) {
        if (n == 0){
            return false;
        }
        if (n == 1) {
            return true;
        }

        int tmp = n;
        unordered_set<int> s;
        while(tmp != 1) {
            if (s.find(tmp) != s.end()){
                break;
            }

            s.insert(tmp);

            string str = to_string(tmp);
            int sum = 0;
            for(int i = 0 ; i < str.size(); i++){
                int value = str[i] - '0';
                sum += value * value;
            }
            tmp = sum;
        }

        if (tmp == 1){
            return true;
        }

        return false;
    }
};