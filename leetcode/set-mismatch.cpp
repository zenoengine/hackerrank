class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
        if (nums.size() == 0)
        {
            return ans;
        }
        int duplicatedNum = 0;
        int missingNum = 0;
        
        vector<int> v(nums.size()+1);
        for(int i = 0 ; i < nums.size(); i++){
            v[nums[i]] += 1;
        }
        
        for(int i = 0 ; i < v.size(); i++){
            if (v[i] == 2) { duplicatedNum = i;}
            else if(v[i] == 0) {missingNum = i;}
        }
        
        ans = {duplicatedNum, missingNum};
        
        return ans;
    }
};