class Solution {
public:
    void DFS(int i, int j, vector<vector<char>>& grid,
             vector<vector<bool>>& vis, int n, int m) {
        if (i < 0 || i >= n || j < 0 || j >= m || vis[i][j] ||
            grid[i][j] != '1') {
            return;
        }
        vis[i][j] = true;
        DFS(i - 1, j, grid, vis, n, m);
        DFS(i, j + 1, grid, vis, n, m);
        DFS(i + 1, j, grid, vis, n, m);
        DFS(i, j - 1, grid, vis, n, m);
    }
    int numIslands(vector<vector<char>>& grid) {
        int island = 0;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '1' && !vis[i][j]) {
                    DFS(i, j, grid, vis, n, m);
                    island++;
                }
            }
        }
        return island;
    }
};