class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& g) {
    //    ******* USING HASH TABLE *******
       
       unordered_map<int, vector<int>> mp;
       vector<vector<int>> ans;

       for(int i = 0; i < g.size(); i++){
           int size = g[i];
           mp[size].push_back(i);

           if(mp[size].size() == size){
               ans.push_back(mp[size]);
               mp[size].clear();
           }
       }
        // for(auto v : mp){
        //     ans.push_back(v.second);
        // }


    //    ******* USING PRIORITY QUEUE *******
        // priority_queue<pair<int, int>> pq;
        // for(int i = 0; i < g.size(); i++){
        //     pq.push({g[i], i});
        // }
        // vector<vector<int>> ans;
        // while(!pq.empty()){
        //     int k = pq.top().first;
        //     vector<int> element;
        //     while(element.size() <k and !pq.empty()){
        //         auto[x,y] = pq.top();
        //         pq.pop();
        //         if(x < k) break;
        //         element.push_back(y);
        //     }
        //     ans.push_back(element);
        // }
        // return ans;
        return ans;
    }
};