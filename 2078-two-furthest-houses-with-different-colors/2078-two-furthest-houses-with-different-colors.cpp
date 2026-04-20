class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int maxDistance = INT_MIN;
        for (int i = 0; i < n; i++) {
            for (int j = n - 1; j > i; j--) {
                if (colors[i] != colors[j]) {
                    maxDistance = max(maxDistance, j - i);
                    break;
                }
            }
        }
        return maxDistance;
    }
};