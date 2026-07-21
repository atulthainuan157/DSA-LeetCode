class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int minStorage = INT_MAX;
        int idx = -1;
        for (int i = 0; i < capacity.size(); i++) {
            if (capacity[i] == itemSize) {
                return i;
            }
            if (capacity[i] > itemSize && minStorage > capacity[i]) {
                minStorage = capacity[i];
                idx = i;
            }
        }
        return idx;
    }
};