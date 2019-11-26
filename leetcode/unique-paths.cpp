/*
      Date: Nov 26, 2019 (Mon) 
      
      Problem: unique-paths
      
      Difficulty: Medium
      
      Keywords: dynamic programming
*/

class Solution {
public:
    int uniquePaths(int m, int n) {
        unsigned int dp[m][n] = {0,};
        
        for(int i = 0;i < m; i++){
            for(int j =0; j < n; j++){
                if(i == 0 || j == 0)
                {
                    dp[i][j] = 1;
                }
                else if(i-1 >= 0 && j-1 >= 0){
                    dp[i][j] = dp[i-1][j] + dp[i][j-1];
                }
                else if(i-1 < 0 && j-1 >= 0){
                    dp[i][j] = dp[i][j-1];
                }
                else if(j-1 < 0 && i-1 >= 0){
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        
        return dp[m-1][n-1];
    }
};