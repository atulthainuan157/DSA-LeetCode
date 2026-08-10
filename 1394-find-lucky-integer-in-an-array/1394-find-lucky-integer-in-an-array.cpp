class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> ump;
        for (int i : arr) {
            ump[i]++;
        }
        int largest = -1;
        for (auto [val, idx] : ump) {
            if (val == idx && val > largest) {
                largest = val;
            }
        }
        return largest;
    }
};