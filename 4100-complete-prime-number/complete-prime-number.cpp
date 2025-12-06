class Solution {
public:
    bool isPrime(int n){
        if(n <= 1) return false;
        for(int i = 2; i < n; i += 1){
            if(n % i == 0){
                return false;
            }
        }
        return true;
    }
    bool completePrime(int num) {
        int prefix = 0, suffix = 0;
        string str = to_string(num);
        int n = str.size();
        int pow = 1;
        for(int i = 0; i < str.size(); i += 1){
            prefix = prefix * 10 + (str[i] - '0');
            suffix = ((str[n - i - 1] - '0') * pow) + suffix;
            pow *= 10;
            if(!isPrime(prefix) || !isPrime(suffix)) return false;
        }
        return true;
    }
};