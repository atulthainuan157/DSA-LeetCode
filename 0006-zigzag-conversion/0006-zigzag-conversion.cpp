class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || s.size() == 1) {
            return s;
        }
        vector<int> num(s.size(), 0);
        int row = 0;
        int dir = 1;
        for (int i = 1; i < s.size(); i++) {
            row = row + dir;
            num[i] = row;
            if (row == 0 || row == numRows - 1) {
                dir = -dir;
            }
        }
        string result = "";
        for (int r = 0; r < numRows; r++) {
            for (int i = 0; i < s.size(); i++) {
                if (r == num[i]) {
                    result += s[i];
                }
            }
        }
        return result;
    }
};