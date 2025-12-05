class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n);
        for(int i = 0; i < n; i += 1){
            if(i == 0){
                prefix[i] = nums[i];
            }
            else{
                prefix[i] = prefix[i - 1] + nums[i];
            }
        }
        int cnt = 0;
        for(int i = 0; i < n - 1; i += 1){
            int num1 = prefix[i];
            int num2 = prefix[n - 1] - num1;
            if((num1 - num2) % 2 == 0){
                cnt += 1;
            }
        }
        return cnt;
    }
};