class Solution {
public:
    bool winnerOfGame(string &colors) {
        int rema = 0;
        int remb = 0;
        for (int i = 1; i + 1 < colors.size(); i++) {
            if (colors[i] == 'A') {
                if (colors[i - 1] == 'A' && colors[i + 1] == 'A') {
                    rema++;
                }
            }
            else {
                if (colors[i - 1] == 'B' && colors[i + 1] == 'B') {
                    remb++;
                }
            }
        }
        return   rema > remb;
    }
};