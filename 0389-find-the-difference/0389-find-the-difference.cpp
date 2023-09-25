class Solution {
public:
    char findTheDifference(string s, string t) {
        int i,sum = 0;
        for( i = 0; i < s.length(); i++){
            sum=sum + int(s[i]) - int(t[i]);
        }
        cout<<sum<<" "<<t[i];
        sum = sum - int(t[i]);
        return char(abs(sum));
    }
};