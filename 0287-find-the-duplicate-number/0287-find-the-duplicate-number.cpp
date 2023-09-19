class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    

    map<int, bool> arr;

    for (int i = 0; i < nums.size(); i++){

        if(arr[nums.at(i)] == true)
            return nums.at(i);
            else arr[nums.at(i)] = true;
        
    }
    return 0;
    }
    
};