class Solution {
public:
    int maxProductPath(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        long long MOD = 1e9 + 7;
        vector<vector<long long>> dp_max(m, vector<long long>(n, 0));
        vector<vector<long long>> dp_min(m, vector<long long>(n, 0));
        dp_max[0][0] = dp_min[0][0] = grid[0][0];
        for (int i = 1; i < m; i++) {
            dp_max[i][0] = dp_min[i][0] = dp_max[i - 1][0] * grid[i][0];
        }
        for (int j = 1; j < n; j++) {
            dp_max[0][j] = dp_min[0][j] = dp_max[0][j - 1] * grid[0][j];
        }
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                long long v1 = dp_max[i - 1][j] * grid[i][j];
                long long v2 = dp_min[i - 1][j] * grid[i][j];
                long long v3 = dp_max[i][j - 1] * grid[i][j];
                long long v4 = dp_min[i][j - 1] * grid[i][j];

                dp_max[i][j] = max({v1, v2, v3, v4});
                dp_min[i][j] = min({v1, v2, v3, v4});
            }
        }
        long long ans = dp_max[m - 1][n - 1];
        if (ans < 0) {
            return -1;
        }
        return ans % MOD;
    }
};