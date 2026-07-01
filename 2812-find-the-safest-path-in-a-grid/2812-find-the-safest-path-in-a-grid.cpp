class Solution {
public:
    vector<int> dr = {0, 1, 0, -1};
    vector<int> dc = {1, 0, -1, 0};

    bool isValidPath(vector<vector<int>>& dist, int mid,
                     vector<vector<int>>& vis, int mark) {
        int n = dist.size();
        if (dist[0][0] < mid) {
            return false;
        }
        queue<pair<int, int>> q;
        q.push({0, 0});
        vis[0][0] = mark;
        while (!q.empty()) {
            auto curr = q.front();
            q.pop();
            int r = curr.first, c = curr.second;
            if (r == n - 1 && c == n - 1) {
                return true;
            }
            for (int k = 0; k < 4; k++) {
                int nr = r + dr[k], nc = c + dc[k];
                if (nr >= 0 && nr < n && nc >= 0 && nc < n && vis[nr][nc]!=mark &&
                    dist[nr][nc] >= mid) {
                    vis[nr][nc] = mark;
                    q.push({nr, nc});
                }
            }
        }
        return false;
    }

    int maximumSafenessFactor(vector<vector<int>>& grid) {
        int n = grid.size();
        if (grid[0][0] == 1 || grid[n - 1][n - 1] == 1) {
            return 0;
        }
        vector<vector<int>> dist(n, vector<int>(n, INT_MAX));
        queue<pair<int, int>> q;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {
                    q.push({i, j});
                    dist[i][j] = 0;
                }
            }
        }
        while (!q.empty()) {
            auto a = q.front();
            q.pop();
            int r = a.first;
            int c = a.second;
            for (int k = 0; k < 4; k++) {
                int nr = r + dr[k], nc = c + dc[k];
                if (nr >= 0 && nr < n && nc >= 0 && nc < n &&
                    dist[nr][nc] > dist[r][c] + 1) {
                    dist[nr][nc] = dist[r][c] + 1;
                    q.push({nr, nc});
                }
            }
        }
        int start = 0, end = min(dist[0][0], dist[n - 1][n - 1]), ans = 0;
        vector<vector<int>> vis(n, vector<int>(n, 0));
        int mark = 0;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (isValidPath(dist, mid, vis, ++mark)) {
                ans = mid;
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return ans;
    }
};