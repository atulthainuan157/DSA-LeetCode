class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n = mat.size();
        for (int rot = 0; rot < 4; rot++) {
            for (int row = 0; row < n / 2; row++) {
                for (int col = 0; col < (n + 1) / 2; col++) {
                    int temp = mat[row][col];
                    mat[row][col] = mat[n - 1 - col][row];
                    mat[n - 1 - col][row] = mat[n - 1 - row][n - 1 - col];
                    mat[n - 1 - row][n - 1 - col] = mat[col][n - 1 - row];
                    mat[col][n - 1 - row] = temp;
                }
            }
            if(mat==target) {
                return true;
            }
        }
        return false;
    }
};