class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum = 0;
        for(auto i:nums) sum+=i;

        // now it becomes find the subarray whose sum is (sum - x)
        int l = 0, r = 0;
        int maxLen = -1, currsum = 0;
        while( r < nums.size()){
            currsum += nums[r];
            while(l<=r and currsum > sum - x)
                currsum -= nums[l++];
            if(currsum == sum - x) maxLen = max(maxLen, r - l + 1);
            
            r++;
        }
        return maxLen == -1? -1: nums.size() - maxLen;
    }
};