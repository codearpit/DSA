class Solution {
public:
    char findTheDifference(string s, string t) {
        int str[26] = {0};
        for(auto ch:s)  str[ch - 'a']++;

        for(int i = 0; i < t.length(); i++){
            if(str[t[i] - 'a'] == 0) return t[i];
            str[t[i] - 'a']--;
        }
        return NULL;
    }
};