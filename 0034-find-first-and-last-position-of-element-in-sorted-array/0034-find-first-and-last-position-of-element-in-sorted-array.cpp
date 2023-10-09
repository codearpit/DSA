class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> res{-1,-1};

        if(!binary_search(nums.begin(), nums.end(), target))
            return res;

        int first = lower_bound(nums.begin(), nums.end(), target) - nums.begin() ;
        int second = upper_bound(nums.begin(), nums.end(), target) - nums.begin() - 1 ;
        res[0] = first;
        res[1] = second ;
        return res;
    }
};