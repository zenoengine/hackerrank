/*
      Date: Nov 25, 2019 (Mon) 
      
      Problem: 55. Jump Game
      
      Difficulty: Medium
      
      Keywords: dfs, dynamic programming
      
      Note: solution 01 is based on dp, my first own sol
      Early return from observation, tried to dp. But, If removed early return code, It doesn't pass.
      Time: 12 ms, Memory: 9.7 mb
*/

class Solution {
public:
    
    bool canJump(vector<int>& nums) 
    {
        if (nums.size() == 0) { return false; }
        else if (nums.size() == 1) { return true;}
        
        bool bTriable = false;
        for(int i = nums.size()-2 ; i >= 0; i--){
            if (nums[i] + i >= nums.size()-1)
            {
                bTriable = true;
                break;
            }
        }
        
        if (!bTriable) {
            return false;
        }
        
        vector<bool> dp(nums.size());
        dp[nums.size()-1] = true;
        for(int i = nums.size()-1 ; i >= 0; i--) 
        {
            for (int j = nums[i]; j >= 0; j--){
                int dpIndex = i + j;
                if(dpIndex > nums.size()-1) {
                    j = nums.size() - i;
                    continue;
                }
                
                if(dp[dpIndex] != false)
                {
                    dp[i] = dp[dpIndex];
                    break;
                }
            }
        }

        return dp[0];
    }
};