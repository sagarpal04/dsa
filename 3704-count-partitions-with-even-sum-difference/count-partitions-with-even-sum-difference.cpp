class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n = nums.size();
        int total = accumulate(nums.begin(), nums.end(), 0);
        int cnt = 0;
        int sum = 0;
        for(int i = 0; i < n - 1; i += 1){
            sum += nums[i];
            int num2 = total - sum;
            if((sum - num2) % 2 == 0){
                cnt += 1;
            }
        }
        return cnt;
    }
};