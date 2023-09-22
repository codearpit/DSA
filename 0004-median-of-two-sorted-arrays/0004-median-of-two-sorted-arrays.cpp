class Solution {
public:

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {     
        int n1 = nums1.size(), n2 = nums2.size();
        int n = n1 + n2;
        int count = 0;
        int i = 0, j = 0, idx2 = n/2, idx1 = n/2 - 1;
        int ele1 = -1, ele2 = -1;
        while(i < n1 and j < n2){
            if(nums1[i] < nums2[j]){
                if(count == idx1) ele1 = nums1[i];
                if(count == idx2) ele2 = nums1[i];
                count++;
                i++;
            }
            else{
                if(count == idx1) ele1 = nums2[j];
                if(count == idx2) ele2 = nums2[j];
                count++;
                j++;
            }
        }
        while(i < n1){
                if(count == idx1) ele1 = nums1[i];
                if(count == idx2) ele2 = nums1[i];
                count++;
                i++;
            
        }
        while(j < n2){
            if(count == idx1) ele1 = nums2[j];
            if(count == idx2) ele2 = nums2[j];
            count++;
            j++;
        }

        if(n % 2 == 1)
            return double(ele2);
        return double(ele1 + ele2)/2.0;
    
    }
    // **** USING MERGER, EXTRA SPACE, TC: O(M+N), SC: O(M+N);
    /*
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merge;
        int l1 = 0, l2 = 0;
        
        while(l1<nums1.size() and l2<nums2.size()){
            if(nums1[l1] < nums2[l2])
                merge.push_back(nums1[l1++]);
            else
                merge.push_back(nums2[l2++]);
        }
        // if(l1 == nums1.size() and l2 < nums2.size())
            while(l1 < nums1.size())
                merge.push_back(nums1[l1++]);
        
            while(l2 < nums2.size())
                merge.push_back(nums2[l2++]);
        // else if(l1 < nums1.size() and l2 == nums2.size())
            for(auto i:merge)cout<<i<<" ";
        int n = l1+l2;
        if(n%2 == 0)
            return double(merge[n/2] + merge[n/2 - 1])/2.0;

        return double(merge[n/2]);
    }*/
};