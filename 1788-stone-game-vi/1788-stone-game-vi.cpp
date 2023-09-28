class Solution {
public:
    int stoneGameVI(vector<int>& aliceValues, vector<int>& bobValues) {
    int n = aliceValues.size();
    vector<pair<int, int>> diffValues;

    for (int i = 0; i < n; i++) {
        diffValues.push_back({aliceValues[i] + bobValues[i], i});
    }

    sort(diffValues.rbegin(), diffValues.rend());

    int aliceScore = 0;
    int bobScore = 0;

    for (int i = 0; i < n; i++) {
        int index = diffValues[i].second;
        if (i % 2 == 0) { // Alice's turn
            aliceScore += aliceValues[index];
        } else { // Bob's turn
            bobScore += bobValues[index];
        }
    }

    if (aliceScore > bobScore) {
        return 1;
    } else if (aliceScore < bobScore) {
        return -1;
    }
        return 0;
    }
    
};