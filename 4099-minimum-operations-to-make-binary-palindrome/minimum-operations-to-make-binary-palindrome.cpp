#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isCheck(int n){
        string str;
        if (n == 0) {
            str = "0";
        } else {
            while (n > 0) {
                str.push_back( (n & 1) ? '1' : '0' ); 
                n >>= 1; 
            }
        }
        int left = 0, right = (int)str.size() - 1;
        while (left < right) {
            if (str[left++] != str[right--]) return false;
        }
        return true;
    }

    vector<int> minOperations(vector<int>& nums) {
        vector<int> palindrome;
        for (int i = 0; i <= 5000; ++i) {
            if (isCheck(i)) palindrome.push_back(i);
        }

        vector<int> ans;
        ans.reserve(nums.size());
        for (int num : nums) {
            auto it = lower_bound(palindrome.begin(), palindrome.end(), num);
            if (it == palindrome.begin()) {
                ans.push_back(abs(*it - num));
            } else if (it == palindrome.end()) {
                ans.push_back(abs(num - palindrome.back()));
            } else {
                int up = *it;
                int down = *(it - 1);
                ans.push_back(min(abs(up - num), abs(num - down)));
            }
        }
        return ans;
    }
};
