int dp[101][101];

class Solution {
public:
    int numPaths(int m, int n)
    {
         if(m == 1 || n == 1)
        {
            return 1;
        }
        
        if(dp[m][n] != 0)
        {
            return dp[m][n];
        }
        
        int ans1 = 0;
        int ans2 = 0;
       
        ans1 = numPaths(m-1, n);
        
       
        ans2 = numPaths(m, n-1);
        
        
        return dp[m][n] = ans1 + ans2;
    }
    
    int uniquePaths(int m, int n) {
       memset(dp, 0, sizeof(dp));
       return numPaths(m, n);
        
    }
};
