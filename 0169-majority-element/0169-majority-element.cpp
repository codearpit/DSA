// https://www.cs.utexas.edu/~moore/best-ideas/mjrty/index.html
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority = 0;
        for (unsigned int i = 0, mask = 1; i < 32; i++, mask <<= 1) {
            int bits = 0;
            for (int num : nums) {
                if (num & mask) {
                    bits++;
                }
            }
            if (bits > nums.size() / 2) {
                majority |= mask;
            }
        }
        return majority;
    }
};

/*
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
};*/