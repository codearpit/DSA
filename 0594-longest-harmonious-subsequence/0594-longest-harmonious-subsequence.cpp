class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> ump;
        for(auto n:nums) ump[n]++;
        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            int x = nums[i];
            if(ump.find(x - 1) != ump.end()){
                ans = max(ans, ump[x]+ump[x-1]);
            }
            else if(ump.find(x+1) != ump.end()){
                ans = max(ans, ump[x] + ump[x+1]);
            }
        }
        return ans;
    }
};