class Solution {
public:
    unordered_map<char, int> m;
    int romanToInt(string s) {
        m.insert(make_pair('I', 1));
        m.insert(make_pair('V', 5));
        m.insert(make_pair('X', 10));
        m.insert(make_pair('L', 50));
        m.insert(make_pair('C', 100));
        m.insert(make_pair('D', 500));
        m.insert(make_pair('M', 1000));

        int ret = 0;
        for(int i = 0 ; i < s.size(); i++) {
            char c = s[i];
            if(s.size() > i + 1 && m[s[i]] < m[s[i+1]]) {
                ret += m[s[i+1]] - m[c];
                i++;
            }
            else{
                ret += m[c];
            }
        }
        return ret;
    }
};