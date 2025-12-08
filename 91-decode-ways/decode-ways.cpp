class Solution {
public:
    vector<int> dp;
    int solve(string s, int idx, int n){
        if(idx >= n) return 1;
        if(s[idx] == '0' && idx == 0) return 0;
        if(dp[idx] != -1) return dp[idx];
        int twoStep = 0;
        if(idx + 1 < n && s[idx] != '0'){
            string str = s.substr(idx, 2);
            int num = stoi(str);
            if(num >= 1 && num <= 26){
                twoStep = solve(s, idx + 2, n);
            }
        }
        int newValue = s[idx] - '0';
        int oneStep = 0;
        if(newValue >= 1 && newValue <= 26){
            oneStep = solve(s, idx + 1, n);
        }
        return dp[idx] = twoStep + oneStep;
    }
    int numDecodings(string s) {
        dp.assign(s.size(), -1);
        return solve(s, 0, s.size());
    }
};