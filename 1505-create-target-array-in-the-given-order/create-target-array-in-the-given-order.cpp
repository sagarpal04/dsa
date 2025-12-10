class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> ans;
        for(int i = 0; i < nums.size(); i += 1){
            ans.insert(ans.begin() + index[i], nums[i]);
        }
        return ans;
    }
};