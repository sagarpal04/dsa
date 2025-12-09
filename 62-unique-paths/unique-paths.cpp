class Solution {
public:
    vector<vector<int>> dp;
    int solve(int i, int j, int m, int n){
        if(i < 0 || j < 0 || i >= m || j >= n) return 0;
        if(i == m - 1 && j == n - 1) return 1;
        if(dp[i][j] != -1) return dp[i][j];
        int right = solve(i, j + 1, m, n);
        int down = solve(i + 1, j, m, n);
        return dp[i][j] = right + down;
    }
    int uniquePaths(int m, int n) {
        dp.assign(m, vector<int>(n, -1));
        vector<vector<int>> dp1(m, vector<int>(n, 0));
        for(int i = m - 1; i >= 0; i -= 1){
            for(int j = n - 1; j >= 0; j -= 1){
                if(i == m - 1 && j == n - 1){
                    dp1[i][j] = 1;
                }
                else if(i == m - 1){
                    dp1[i][j] = 1;
                }
                else if(j == n - 1){
                    dp1[i][j] = 1;
                }
                else{
                    dp1[i][j] = dp1[i + 1][j] + dp1[i][j + 1];
                }
            }
        }
        return dp1[0][0];
        // return solve(0, 0, m, n);
    }
};