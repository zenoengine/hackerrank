class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        if (digits.empty()){
            return ans;
        }
        
        bool bOver = true;
        vector<int> v = digits;
        for(int i = digits.size() - 1; i >= 0; i--){
            // i = 0
            int value = digits[i];
            if (bOver){
                value += 1; 
                bOver = false;
            }
            int remainValue = value % 10;

            v[i] = remainValue;
            
            if (value != 0 && value / 10 == 0)
            {
                break;
            }
            
            bOver = true;
            
        }
        if (bOver) {
            ans.push_back(1);            
        }

for (auto value : v) {
ans.push_back(value);
}
        
return ans;
    }

};