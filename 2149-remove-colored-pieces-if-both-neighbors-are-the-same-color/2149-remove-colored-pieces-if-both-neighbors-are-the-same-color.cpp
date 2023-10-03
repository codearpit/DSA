class Solution {
public:
    bool winnerOfGame(string &colors) {
        int a = 0;
        int b = 0;
        for (int i = 1; i + 1 < colors.size(); i++) {
            if (colors[i] == 'A') {
                if (colors[i - 1] == 'A' && colors[i + 1] == 'A') {
                    a++;
                }
            }
            else {
                if (colors[i - 1] == 'B' && colors[i + 1] == 'B') {
                    b++;
                }
            }
        }
        return   a > b;
    }
};