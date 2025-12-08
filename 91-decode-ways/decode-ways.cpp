class Solution {
public:
    int numDecodings(string s) {
        int n = s.size();
        vector<int> dp(n + 1, 0);
        dp[n] = 1;
        for(int i = n - 1; i >= 0; i -= 1){
            if(s[i] == '0') continue;
            dp[i] += dp[i + 1];
            if(i + 1 < n){
                int twoDigit = (s[i] - '0') * 10 + (s[i + 1] - '0');
                if(twoDigit >= 10 && twoDigit <= 26){
                    dp[i] += dp[i + 2];
                }
            }
        }
        return dp[0];
    }
};