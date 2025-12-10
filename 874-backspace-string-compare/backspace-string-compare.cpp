class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string str1 = "", str2 = "";
        for(char ch : s){
            if(!str1.empty() && ch == '#'){
                str1.pop_back();
            }
            else{
                if(ch == '#') continue;
                str1.push_back(ch);
            }
        }
        for(char ch : t){
            if(!str2.empty() && ch == '#'){
                str2.pop_back();
            }
            else{
                if(ch == '#') continue;
                str2.push_back(ch);
            }
        }
        cout << str1 << " - " << str2 << endl;
        return str1 == str2;
    }
};