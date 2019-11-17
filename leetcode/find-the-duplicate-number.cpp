class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int h = 0, t = 0;
        
        int l, r;
        int cnt = 1;
        while (true)
        {
            h = nums[h];
            h = nums[h];
            
            t = nums[t];
            
            if (h == t)
            {
                r = l;
                break;
            }
            
            cnt++;
        }
        
        r = h;
        l = 0;
        
        while(cnt--)
        {
            r = nums[r];
            l = nums[l];
            
            if(l == r)
            {
                break;
            }
        }
        
        return l;
    }
};