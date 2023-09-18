// Define a custom comparison function to sort rows based on the number of soldiers and row index
bool compareRows(pair<int, int>& a, pair<int, int>& b) {
    if (a.first != b.first) {
        return a.first < b.first;  // Sort by the number of soldiers
    }
    return a.second < b.second;    // If soldiers are equal, sort by row index
}

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
    int m = mat.size();
    int n = mat[0].size();

    // Create a vector of pairs (count of soldiers, row index)
    vector<pair<int, int>> rows;

    for (int i = 0; i < m; ++i) {
        int soldiers = 0;
        for (int j = 0; j < n; ++j) {
            soldiers += mat[i][j];
        }
        rows.push_back({soldiers, i});
    }

    // Sort the rows using the custom comparison function
    sort(rows.begin(), rows.end(), compareRows);

    // Extract the indices of the k weakest rows
    vector<int> result;
    for (int i = 0; i < k; ++i) {
        result.push_back(rows[i].second);
    }

    return result;
    }
};