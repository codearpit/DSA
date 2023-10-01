class Solution {
public:
// In place without extra space
    string reverseWords(string s) {
        int i = 0;
        for(int j = 0; j < s.length(); j++){
            if(s[j] == ' ' ){ // j == s.length() is for last word
                reverse(s.begin() + i, s.begin() + j);
                i = j + 1;
            }
        }
        reverse(s.begin() + i, s.end()); // for last word; remove the j == s.length()
        return s;
    }

// using extra space;
    // string reverseWords(string s) {
    //     string ans = "";
    //     string sub = "";

    //     for(int i = 0; i < s.length(); i++){
    //         if(s[i] != ' '){
    //             sub+=s[i];
    //         }    
    //         else{
    //             ans+= string(sub.rbegin(), sub.rend());
    //             ans+=' ';
    //             sub = "";
    //         }
    //     }
    //     ans+= string(sub.rbegin(), sub.rend());
    //     return ans;

    // }
};