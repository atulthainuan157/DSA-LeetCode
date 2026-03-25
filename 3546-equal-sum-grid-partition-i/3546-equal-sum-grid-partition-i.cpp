class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        long long sum = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                sum += grid[i][j];
            }
        }
        long long curr = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                curr += grid[i][j];
            }
            if (sum == 2 * curr) {
                return true;
            }
        }
        curr = 0;
        for (int j = 0; j < n; j++) {
            for (int i = 0; i < m; i++) {
                curr += grid[i][j];
            }
            if (sum == 2 * curr) {
                return true;
            }
        }
        return false;
    }
};