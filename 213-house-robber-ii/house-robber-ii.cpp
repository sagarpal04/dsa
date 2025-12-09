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
        if(n == 1) return nums[0];
        dp.assign(n + 1, -1);
        int startFromZero = solve(nums, 0, n - 1);
        dp.assign(n + 1, -1);
        int startFromOne = solve(nums, 1, n);
        return max(startFromZero, startFromOne);
    }
};