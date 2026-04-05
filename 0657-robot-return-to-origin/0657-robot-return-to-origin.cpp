class Solution {
public:
    bool judgeCircle(string moves) {
        int horizontal = 0, vertical = 0;
        for (char ch : moves) {
            if (ch == 'U') {
                vertical++;
            } else if (ch == 'D') {
                vertical--;
            } else if (ch == 'R') {
                horizontal++;
            } else {
                horizontal--;
            }
        }
        return (vertical == 0 && horizontal == 0);
    }
};