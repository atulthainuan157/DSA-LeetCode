class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int currAlt = 0;
        int maxAlt = 0;
        for (int val : gain) {
            currAlt += val;
            maxAlt = max(currAlt, maxAlt);
        }
        return maxAlt;
    }
};