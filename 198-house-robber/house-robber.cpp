class Solution {
public:
    vector<int> dp;
    int solve(vector<int>&nums, int idx, int n){
        if(idx >= n) return 0;
        if(dp[idx] != -1) return dp[idx];
        int inclu = nums[idx] + solve(nums, idx + 2, n);
        int exclu = solve(nums, idx + 1, n);
        return dp[idx] = max(inclu, exclu);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        dp.assign(n + 1, -1);
        return solve(nums, 0, n);
    }
};