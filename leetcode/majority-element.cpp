class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size() == 0) { return 0; }
        map<int, int> m;
        for (auto num : nums)
        {
            if(m.find(num) == m.end())
            {
                m[num] = 1;
                continue;
            }
            
            m[num] += 1;
        }
        
        int num = 0;
        int preq = 0;
        for(auto& it : m)
        {
            if(it.second > preq)
            {
                num = it.first;
                preq = it.second;
            }
        }
        
        return num;
    }
};