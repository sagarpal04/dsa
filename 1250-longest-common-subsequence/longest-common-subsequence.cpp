class Solution {
public:
    vector<vector<int>> dp;
    int solve(string &text1, string &text2, int i, int j, int n, int m){
        if(i >= n || j >= m) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        if(text1[i] == text2[j]){
            dp[i][j] = 1 + solve(text1, text2, i + 1, j + 1, n, m);
        }
        else{
            dp[i][j] = max(solve(text1, text2, i + 1, j, n, m), solve(text1, text2, i, j + 1, n, m));
        }
        return dp[i][j];
    }
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size(), m =  text2.size();
        dp.assign(n, vector<int>(m, -1));
        return solve(text1, text2, 0, 0, n, m);
    }
};