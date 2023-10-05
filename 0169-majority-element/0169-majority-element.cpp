// https://www.cs.utexas.edu/~moore/best-ideas/mjrty/index.html

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int count = 0;
        auto element = nums[0];

        for(int i = 0; i<nums.size(); i++){
            if(count == 0){
                element = nums[i];
                count++;
            }
            else if(element == nums[i]){
                count++;
            }
            else{
            
                count--;
            }


        }
    
    return element;
    }
};