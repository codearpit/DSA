class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string S="",T="";
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '#' ){
                if(S.length()!=0){
                    S.pop_back();
                }
            }
            else S+=s[i];
        }
        for(int i = 0; i < t.length(); i++){
            if(t[i] == '#' ){
                if(T.length()!=0){
                    T.pop_back();
                }
            }
            else T+=t[i];
        }
        cout<<S<<" . "<<T;
        return S==T;
    }
};