class Solution {
public:
    string convert(string s, int numRows) {
        
        vector<vector<char>> colVec;
        
        bool bDown = true;
        int curColIndex = 0;
        int curRowIndex = 0;
        for (int i = 0 ; i < s.size(); i++) {
            
            char c = s[i];
            
            if (colVec.size() <= curColIndex) {
                colVec.push_back(vector<char>(numRows));
            }
            
            colVec[curColIndex][curRowIndex] = c;
            
            if (curRowIndex == numRows - 1) {
                bDown = false;
            }
            else if(curRowIndex == 0) {
                bDown = true;
            }
            
            if (bDown) {
                if (curRowIndex < numRows) {
                    curRowIndex++;
                }
            }
            else {
                if (curRowIndex > 0) {
                    curRowIndex--;
                }
                
                curColIndex++;
            }
        }
        
        string output;
        for (int row = 0; row < numRows; row++) {
            for (int col = 0; col < colVec.size(); col++) {
                if (colVec[col][row] != '\0'){
                    output += colVec[col][row];
                }
            }
        }
        
        return output;
    }
};