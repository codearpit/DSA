class Solution {
public:
    char findTheDifference(string s, string t) {
        int i,sum = 0;
        for( i = 0; i < s.length(); i++){
            sum=sum + s[i] - t[i];
        }
        // cout<<sum<<" "<<t[i];
        sum = sum - t[i];
        return abs(sum);
    }

    // XOR
    /*
    char findTheDifference(std::string s, std::string t) {
        char result = 0;
        for (char c : s + t) {
            result ^= c;
        }
        return result;
    }*/
};