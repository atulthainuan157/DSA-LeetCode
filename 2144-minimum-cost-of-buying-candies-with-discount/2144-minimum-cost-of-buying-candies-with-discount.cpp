class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end());
        int free = 0;
        int totalCost = 0;
        for (int i = cost.size() - 1; i >= 0; i--) {
            if (free == 2) {
                free = 0;
                continue;
            } else {
                totalCost += cost[i];
                free++;
            }
        }
        return totalCost;
    }
};