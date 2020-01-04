class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int i = nums.size()-1;
        while (i >= 0 && i < nums.size()) {
            int val = nums[i] - 1;
            if (val >= 0 && nums[i] >= 0 && nums[val] >= 0){
                swap(nums[val], nums[i]);
                if(nums[val] == val+1){
                    nums[val] = -1;
                }
            }
            else {
                i--;
            }
        }
        
        vector<int> ans;
        for(i = 0; i < nums.size(); i++){
            if (nums[i] >= 0) {
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};