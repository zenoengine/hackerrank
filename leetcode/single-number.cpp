class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size() == 0)
        {
            return 0;
        }
        
        unordered_set<int> s;
        
        for(int i = 0; i < nums.size(); i++)
        {
            auto iter = s.find(nums[i]);
            if (iter != s.end())
            {
                s.erase(iter);
            }
            else
            {
                s.insert(nums[i]);
            }
        }
        
        return *s.begin();
    }
};