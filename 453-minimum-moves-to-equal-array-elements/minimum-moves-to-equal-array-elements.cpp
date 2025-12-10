class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mini = INT32_MAX;
        int sum = 0;
        for(int num : nums){
            mini = min(mini, num);
            sum += num;
        }
        return sum - nums.size() * mini;
    }
};