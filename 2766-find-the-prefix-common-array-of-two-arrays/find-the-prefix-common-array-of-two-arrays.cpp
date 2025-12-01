class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_set<int> st1;
        unordered_set<int> st2;
        int ops = 0;
        vector<int> ans;
        // 0 2 
        // 1 3 2
        // 3 1 2
        unordered_map<int, bool> visited;
        for(int i = 0; i < A.size(); i += 1){
            st1.insert(A[i]);
            st2.insert(B[i]);
            if(st1.count(B[i]) && !visited[B[i]]){
                ops += 1;
                visited[B[i]] = true;
            }
            if(st2.count(A[i]) && !visited[A[i]]){
                ops += 1;
                visited[A[i]] = true;
            }
            ans.push_back(ops);
        }
        return ans;
    }
};