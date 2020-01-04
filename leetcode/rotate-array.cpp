class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int shift = k % nums.size();
        if(shift == 0){
            return;
        }

        vector<int> cp;
        cp.reserve(nums.size());
        for(int i = nums.size() - shift; i < nums.size(); i++){
            cp.push_back(nums[i]);
        }

        for(int i = 0; i < nums.size() - shift; i++){
            cp.push_back(nums[i]);
        }
        nums = cp;
    }
};