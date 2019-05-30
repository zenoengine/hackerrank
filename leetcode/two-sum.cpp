class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> answer;
        
        bool bFound = false;
        
        for (int i = 0 ; i < nums.size(); i++)
        {
            int sub = target - nums[i];
            for(int j = i+1; j < nums.size(); j++)
            {
                if (sub == nums[j])
                {
                    answer.push_back(i);
                    answer.push_back(j);
                    bFound = true;
                    break;
                }
            }
            
            if (bFound)
            {
                break;
            }
        }
        
        return answer;
    }
};