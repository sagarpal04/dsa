class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); i += 1){
            int remain = target - nums[i];
            if(mp.count(remain)){
                return {mp[remain], i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};