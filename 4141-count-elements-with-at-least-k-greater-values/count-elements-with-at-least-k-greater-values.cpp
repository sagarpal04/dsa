class Solution {
public:
    int countElements(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int ans = 0;
        int n = nums.size();
        for(int i = 0; i < nums.size(); i += 1){
            int idx = upper_bound(nums.begin(), nums.end(), nums[i]) - nums.begin();
            if(n - idx>= k){
                ans += 1;
            }
        }
        return ans;
    }
};