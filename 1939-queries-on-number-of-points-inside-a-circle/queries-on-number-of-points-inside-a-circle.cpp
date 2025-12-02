class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> ans;
        for(int i = 0; i < queries.size(); i += 1){
            int x1 = queries[i][0], y1 = queries[i][1], r = queries[i][2] * queries[i][2];
            int cnt = 0;
            for(int j = 0; j < points.size(); j += 1){
                int x2 = points[j][0], y2 = points[j][1];
                int distance = pow((x2 - x1), 2) + pow((y2 - y1), 2);
                if(distance <= r){
                    cnt += 1;
                }
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};