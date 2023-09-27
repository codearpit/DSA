class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> ump;
        // int vis[ump.size()] = {0};
        for(auto n:nums) ump[n]++;
        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            int x = nums[i];
            // if(vis[x] == 1) continue;
            if(ump.find(x - 1) != ump.end()){
                ans = max(ans, ump[x]+ump[x-1]);
                // vis[x-1]
            }
             if(ump.find(x+1) != ump.end()){
                ans = max(ans, ump[x] + ump[x+1]);
            }
        }
        return ans;
    }
};