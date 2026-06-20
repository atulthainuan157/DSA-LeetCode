class Solution {
public:
    void DFS(int src, vector<vector<int>>& isConnected, vector<bool>& vis) {
        vis[src] = true;
        for (int j = 0; j < isConnected[src].size(); j++) {
            if (isConnected[src][j] == 1 && !vis[j]) {
                DFS(j, isConnected, vis);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<bool> vis(n, false);
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                count++;
                DFS(i, isConnected, vis);
            }
        }
        return count;
    }
};