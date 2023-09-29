class Solution {
public:
    bool isMonotonic(vector<int>& arr) {
        int i = 0;
        int n = arr.size();
        while(i<n - 1){
            if(arr[i] == arr[i+1]) i++;

            else if(arr[i] < arr[i+1]){
                while(i < n - 1){
                    if(arr[i] > arr[i+1]) return false;
                    i++;
                }
            }
            else{
             while(i < n - 1){
                    if(arr[i] < arr[i+1]) return false;
                    i++;
                }
            }   

        
        }
        return true;
    }
};