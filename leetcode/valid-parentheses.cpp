class Solution {
public:
    bool isValid(string s) {        
        vector<pair<char, char>> p = {{'(', ')'}, {'{', '}'}, {'[', ']'}};
        stack<char> stk;
        stack<char> tStk;
        
        for (int i = 0 ; i < s.size(); i++) {
            char c = s[i];
            char oB = '\n';
            bool bCloseBrackets = false;
            for (auto& pair : p) {
                if (pair.second == c){
                    bCloseBrackets = true;
                    oB = pair.first;
                    break;
                }
            }
            
            stk.push(c);
            
            if (bCloseBrackets){
                while (!stk.empty()) {
                    tStk.push(stk.top());
                    stk.pop();
                    if(stk.empty()){
                        return false;
                    }
                    
                    char t = stk.top();
                    if (t == oB) {                        
                        stk.pop();
                        tStk.pop();
                        break;
                    }
                    
                    return false;
                }
                
                while (!tStk.empty()) {
                    stk.push(tStk.top());
                    tStk.pop();
                }
            }
        }
        
        return stk.empty();
    }
};