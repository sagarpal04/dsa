class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int n = nums.size();
        int result = 0;
        int maxXOR = 0;
        for(int i = 0; i < (1 << n); i += 1){
            int x = i;
            int XOR = 0;
            for(int j = 0; j < n; j += 1){
                if(x & (1 << j)){
                    XOR |= nums[j];
                }
            }
            if(XOR > maxXOR){
                result = 0;
                maxXOR = XOR;
            }
            if(XOR == maxXOR){
                result += 1;
            }
        }
        return result;
    }
};