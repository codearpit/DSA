class Solution {
public:
//  brute force
/*
    bool find132pattern(vector<int>& nums) {
        

        for(int i = nums.size() - 1; i >1; i--){
            int right = nums[i];
            for(int j = i - 1; j>=1; j--){
                if(nums[j] > right){
                    // int mid = nums[j];
                    for(int k = j - 1; k >= 0; k--){
                        if(nums[k] < right) return true;
                    }
                }
            }
        }
        return false;
    }
*/
// Using Stack
    bool find132pattern(vector<int>& nums) {
        stack<pair<int, int>> stack; // pair [num, minLeft], mono decreasing
        
        int curMin = nums[0];
        
        for (int i = 1; i < nums.size(); ++i) {
            while (!stack.empty() && nums[i] >= stack.top().first) {
                stack.pop();
            }
            
            if (!stack.empty() && nums[i] > stack.top().second) {
                return true;
            }
            
            stack.push(std::make_pair(nums[i], curMin));
            curMin = std::min(curMin, nums[i]);
        }
        return false;
    
    }
};