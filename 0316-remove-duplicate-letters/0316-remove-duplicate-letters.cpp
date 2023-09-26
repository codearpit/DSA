class Solution {
public:
    string removeDuplicateLetters(string s) {
        if(s.length() == 1) return s;
        vector<int> count(26,0), vis(26,0);
        string res = "";
        for(int i = 0; i < s.length(); i++){
            count[s[i] - 'a']++;
        }
        for(int i = 0; i < s.length(); i++){
            count[s[i] - 'a']--;
            if(vis[s[i] - 'a'] == 1) continue;
            while(res.size() > 0 and res.back()>s[i] and count[res.back() - 'a'] > - 0){
                vis[res.back() - 'a'] = 0;
                res.pop_back();
            }
            res += s[i];
            vis[s[i] - 'a'] = 1;
        }
        return res;
    }
};