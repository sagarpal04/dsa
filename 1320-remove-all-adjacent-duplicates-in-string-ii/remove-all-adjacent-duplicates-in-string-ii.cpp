class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<pair<char, int>> arr;
        for(char ch : s){
            if(!arr.empty() && arr.back().first == ch){
                arr.back().second += 1;
                if(arr.back().second == k){
                    arr.pop_back();
                }
            }
            else{
                arr.push_back({ch, 1});
            }
        }
        string result = "";
        for(auto num : arr){
            int i = num.second;
            while(i--){
                result.push_back(num.first);
            }
        }
        return result;
    }
};