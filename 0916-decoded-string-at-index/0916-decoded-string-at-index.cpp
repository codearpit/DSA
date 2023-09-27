class Solution {
public:
/* 
// my initial approach

    string decodeAtIndex(string s, int k) {
        // string ans;
        if(k == 1) return string(1, s[0]);
        string tape = "";
        string curr = "";
        // cout<<tape.size()<<" ";
        for(int i = 0; i<s.length(); i++){
            if(s[i]>57){
                curr +=s[i];
                continue;
            }
            
            int x = s[i] - 48;
            tape += curr;
            // cout<<"x: "<<x<<" "<<tape<<endl;
            
            curr = "";
            float tape_size = tape.size() * float(x);
            // cout<<"tapesize "<<tape_size<<endl;
            float check = tape_size/float(k);
            // cout<<"check "<<check<<endl;
            if(check >= 1.0){
                if(check == 1.0){
                    // cout<<tape<<endl;
                    return string(1,tape[k - 1]);
                }
                else{
                    // cout<<tape<<endl;

                    return string(1, tape[(k % tape.size()) - 1]);
                }
            }
            else{
                // cout<<endl<<"**"<<endl;
                for(int j = 1; j < x  ; j++){
                    // cout<<tape<<endl;
                    tape+= tape;
                }
 curr = "";
            }
            

            
        }
    return string(1,s[k - 1]);
    }
    */
// optimal approach
    string decodeAtIndex(string s, int k) {
        long long length = 0;
        int i = 0;

        for(i = 0; length < k; i++){
            if(isdigit(s[i]))
                length *= s[i] - 48;
            else 
                length += 1;
        }

        while(i--){
            if(isdigit(s[i])){
                length /= (s[i] - 48);
                k = k % length;
            }
            else{
                if(k == 0 or k == length)
                    return string(1,s[i]);
            
                length--;
            }
        }
        return "arpit";




    }
};