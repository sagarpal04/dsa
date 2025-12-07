class Solution {
public:
    int countOdds(int low, int high) {
        int result = 0;
        while(low <= high){
            if(low & 1) result += 1;
            low += 1;
        }
        return result;
    }
};