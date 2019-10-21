class Solution {
public:
    bool isIsomorphic(string s, string t) {        
        unordered_map<char, char> cm;
        unordered_map<char, char> rcm;
        for(int i = 0 ; i < s.size(); i++)
        {
            if (cm.find(s[i]) == cm.end())
            {
                if(rcm.find(t[i]) == rcm.end())
                {
                    cm.insert(make_pair(s[i], t[i]));
                    rcm.insert(make_pair(t[i], s[i]));
                }
                else
                {
                    return false;
                }                
            }
            
            s[i] = cm[s[i]];
        }
        
        return s == t;
    }
};