class Solution {
public:
    vector<int> dp;
    int solve(string s, int idx, int n){
        if(idx >= n) return 1;
        if(dp[idx] != -1) return dp[idx];
        int oneDigit = s[idx] - '0';
        int oneStep = 0;
        if(oneDigit >= 1 && oneDigit <= 26){
            oneStep = solve(s, idx + 1, n);
        }
        int twoStep = 0;
        if(idx + 1 < n && s[idx] != '0'){
            int num = 0;
            num = (num * 10) + (s[idx] - '0');
            num = (num * 10) + (s[idx + 1] - '0');
            if(num >= 1 && num <= 26){
                twoStep = solve(s, idx + 2, n);
            }
        }
        return dp[idx] = twoStep + oneStep;
    }
    int numDecodings(string s) {
        if(s[0] == '0') return 0;
        dp.assign(s.size(), -1);
        return solve(s, 0, s.size());
    }
};