class Solution {
public:
    void reverse(vector<int>& nums, int begin, int end) {
        int j = 0;
        for(int i = begin ; i < (end+begin)/2; i++) {
            swap(nums[i], nums[end-1-j]);
            j++;
        }
    }

    void rotate(vector<int>& nums, int k) {
        int shift = k % nums.size();
        if(shift == 0){
            return;
        }

        reverse(nums, 0, nums.size());
        reverse(nums, 0, shift);
        reverse(nums, shift, nums.size());
    }
};