class Solution {
public:
    int countTriples(int n) {
        int result = 0;
        for(int i = 1; i <= n; i += 1){
            for(int j = 1; j <= n; j += 1){
                if(i != j){
                    int num = sqrt(i * i + j * j);
                    if(num <= n && num * num == i * i + j * j){
                        result += 1;
                    }
                }
            }
        }
        return result;
    }
};