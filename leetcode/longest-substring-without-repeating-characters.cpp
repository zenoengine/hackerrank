#include <unodered_set>

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       
        int max = 0;
        for (int i = 0 ; i < s.size(); i++)
        {
            std::unordered_set<char> charset;
            int cnt = 0;
            
            for(int j = i; j < s.size(); j++)
            {
                if (charset.find(s[j]) == charset.end())
                {
                    charset.insert(s[j]);
                    cnt++;
                }
                else
                {
                    break;
                }
            }
            
            if (cnt > max)
            {
                max = cnt;
            }
        }
        
        return max;
    }
};