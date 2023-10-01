class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        string sub = "";

        for(int i = 0; i < s.length(); i++){
            if(s[i] != ' '){
                sub+=s[i];
            }    
            else{
                ans+= string(sub.rbegin(), sub.rend());
                ans+=' ';
                sub = "";
            }
        }
        ans+= string(sub.rbegin(), sub.rend());
        return ans;

    }
};