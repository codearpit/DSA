class Solution {
public:

    int binary(vector<int> arr){
        int hi = arr.size() - 1;
        int lo = 0;
        while(hi >= lo){
            int mid = lo + (hi - lo)/2;
            if(arr[mid] == 0){
                hi = mid - 1;
            }
            else lo = mid + 1;
        }
        return lo;
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<pair<int, int>> pq;
        vector<int> ans(k,-1);

        for(int i = 0; i < mat.size(); i++){
            int ones = binary(mat[i]);
            pq.push(make_pair(ones, i));
            if(pq.size()>k){
                pq.pop();
            }
        }
        for(int i = k - 1; i >= 0; i--){
            ans[i] = pq.top().second;
            pq.pop();
        }
        return ans;
    }
};