static const int fast_io = []()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();
class Solution {
public:

    // bool isMonotonic(vector<int> A) {
    //     bool inc = true, dec = true;
    //     for (int i = 1; i < A.size(); ++i){
    //         inc &= A[i - 1] <= A[i];
    //         dec &= A[i - 1] >= A[i];
    //     }
    //     return inc || dec;
    // }

    // bool isMonotonic(vector<int>& arr) {
    //     int i = 0;
    //     int n = arr.size();
    //     while(i<n - 1){
    //         if(arr[i] == arr[i+1]) i++;

    //         else if(arr[i] < arr[i+1]){
    //             while(i < n - 1){
    //                 if(arr[i] > arr[i+1]) return false;
    //                 i++;
    //             }
    //         }
    //         else{
    //          while(i < n - 1){
    //                 if(arr[i] < arr[i+1]) return false;
    //                 i++;
    //             }
    //         }   

        
    //     }
    //     return true;
    // }
    bool isMonotonic(vector<int>& nums) {
        int size = nums.size();
        if (size == 1){return true;}
        int startPos = 1;
        while (startPos < size){
            if (nums[startPos - 1] != nums[startPos]){
                startPos--;
                break;
            }
            startPos++;
        }
        if (startPos == size){return true;}
        int diff = nums[startPos + 1] - nums[startPos];
        for (startPos; startPos < size - 1; startPos++){
            if (diff > 0 && nums[startPos + 1] - nums[startPos] < 0) {return false;}
            else if (diff < 0 && nums[startPos + 1] - nums[startPos] > 0) {return false;}
        }
        return true;
    }
};