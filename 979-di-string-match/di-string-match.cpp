class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> ans;
        int low = 0, high = s.size();
        for(int i = 0; i < s.size(); i += 1){
            if(s[i] == 'I'){
                ans.push_back(low++);
            }
            else{
                ans.push_back(high--);
            }
        }
        ans.push_back(low);
        return ans;
    }
};