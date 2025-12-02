class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        int n = groupSizes.size();
        map<int, vector<int>> mp;
        for(int i = 0; i < n; i += 1){
            mp[groupSizes[i]].push_back(i);
        }
        vector<vector<int>> ans;
        for(auto i : mp){
            vector<int> temp;
            int size_arr = i.first;
            for(auto j : i.second){
                temp.push_back(j);
                if(temp.size() == size_arr){
                    ans.push_back(temp);
                    temp.clear();
                }
            }
        }
        return ans;
    }
};