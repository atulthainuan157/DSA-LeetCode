class Solution {
public:
    int ans = INT_MAX;

    void dfs(int src, vector<vector<pair<int, int>>>& adj, vector<bool>& vis) {
        vis[src] = true;

        for (auto& [nbr, wt] : adj[src]) {
            ans = min(ans, wt);

            if (!vis[nbr]) {
                dfs(nbr, adj, vis);
            }
        }
    }

    int minScore(int n, vector<vector<int>>& roads) {
        vector<vector<pair<int, int>>> adj(n + 1);

        for (auto& r : roads) {
            int u = r[0];
            int v = r[1];
            int wt = r[2];

            adj[u].push_back({v, wt});
            adj[v].push_back({u, wt});
        }
        vector<bool> vis(n + 1, false);

        dfs(1, adj, vis);

        return ans;
    }
};