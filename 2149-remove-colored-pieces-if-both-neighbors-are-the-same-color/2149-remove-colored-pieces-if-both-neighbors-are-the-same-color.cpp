class Solution {
public:
    bool winnerOfGame(string colors) {
        int a = 0; 
        int b = 0;

        int i = 0;
        while (i < colors.size()) {
            // A
            int da = 0;
            while (i < colors.size() && colors[i] == 'A') {
                ++i;
                ++da;
            }
            a += max(0, da - 2);

            // B
            int db = 0; 
            while (i < colors.size() && colors[i] == 'B') {
                ++i;
                ++db;
            }
            b+= max(0, db - 2);
        }

        return a > b;
    }
};