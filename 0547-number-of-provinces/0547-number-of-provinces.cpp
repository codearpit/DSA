class Solution {
public:

    void DFS(int node,vector<vector<int>> &grid, vector<bool> &visited){
        visited[node] = true;
        int n = visited.size(); //no. of nodes
        for(int i = 0; i < n; i++){
            if(node != i and grid[node][i] == 1 and visited[i] != true){
                DFS(i, grid, visited);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& grid) {
        if(grid.empty()) return 0;
        int n = grid.size();
        vector<bool> visited(n,false);
        int ans = 0;
        for(int i = 0; i<n; i++){
            if(!visited[i]){
                DFS(i, grid, visited);
                ans++;
            }
        }
        return ans;

    }
};