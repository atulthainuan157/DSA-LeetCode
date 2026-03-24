class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        const int MOD = 12345;
        vector<int> matrix(m * n, 0);
        int idx = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                matrix[idx++] = grid[i][j] % MOD;
            }
        }
        vector<int> prefix(m * n);
        prefix[0] = 1;
        for (int i = 1; i < m * n; i++) {
            prefix[i] = (prefix[i - 1] * matrix[i - 1]) % MOD;
        }
        vector<int> suffix(m * n);
        suffix[m * n - 1] = 1;
        for (int i = m * n - 2; i >= 0; i--) {
            suffix[i] = (suffix[i + 1] * matrix[i + 1]) % MOD;
        }
        for (idx = 0; idx < m * n; idx++) {
            int i = idx / n;
            int j = idx % n;
            grid[i][j] = (prefix[idx] * suffix[idx]) % MOD;
        }
        return grid;
    }
};