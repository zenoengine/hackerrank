class Solution {
public:
    bool IsPalindromic(string s) {
        int lastIdx = s.size()-1;
        for(int i = 0 ; i < s.size()/2; i++)
        {
            if (s[i] != s[lastIdx - i])
            {
                return false;
            }
        }
        
        return true;
    }
    
    string longestPalindrome(string s) {
        string llsub;
        
        std::map<char, std::vector<int>> indexMap;
        
        for(int i = 0 ; i < s.size(); i++)
        {
            if (indexMap.find(s[i]) == indexMap.end())
            {
                indexMap.insert(make_pair(s[i], std::vector<int>()));
            }
            
            indexMap[s[i]].push_back(i);
        }
        
        for(auto it : indexMap)
        {
            auto v = it.second;
            
            for(int startIdx = 0; startIdx < v.size(); startIdx++)
            {
                for (int endIdx = v.size() - 1 ; endIdx >= startIdx; endIdx--)
                {
                    int begin = v[startIdx];
                    int count = v[endIdx] - begin + 1;
                    
                    if (llsub.size() > count)
                    {
                        break;
                    }
                    
                    string sub = s.substr(begin, count);
                    if (IsPalindromic(sub))
                    {
                        llsub = sub;
                        break;
                    }
                }
            }
        }
        
        return llsub;
    }
};