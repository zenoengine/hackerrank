class Solution {
public:
    string TrimSpaces(string& s) {
        string ret;
        int begin = 0;
        for (int i = 0 ; i < s.size(); i++) {
            if (s[i] != ' '){
                begin = i;
                break;
            }
        }
        
        int end = 0;
        for(int i = s.size()-1; i >= 0; i--){
            if (s[i] != ' '){
                end = i;
                break;
            }
        }
        
        for(int i = begin; i <= end; i++){
            if(ret[ret.size()-1] == ' ' && s[i] == ' '){
                continue;
            }
            
            ret += s[i];
        }
        
        return ret;
    }
    
    vector<string> MakeStringList(string& s) {
        stack<string> stk;
        string word;
        for(int i = 0 ; i < s.size(); i++) {
            if (s[i] != ' ') {
                word += s[i];
            }
            else {
                stk.push(word);
                word.clear();
            }
        }
        
        if(word.size()){
            stk.push(word);
            word.clear();
        }
        
        vector<string> ret;
        while (!stk.empty()){
            ret.push_back(stk.top());
            stk.pop();
        }
        
        return ret;
    }
    
    string reverseWords(string s) {
        string ts =TrimSpaces(s);
        vector<string> sl = MakeStringList(ts);
        
        string ans;
        for(int i = 0 ; i < sl.size(); i++)
        {
            ans += sl[i];
            if(i != sl.size()-1){
                ans += ' ';
            }
        }
        
        return ans;
    }
};