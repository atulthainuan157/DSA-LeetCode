class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> ans;
        int min = INT_MAX;
        sort(arr.begin(), arr.end());
        for (int i = 1; i < arr.size(); i++) {
            int diff = arr[i] - arr[i - 1];
            if (diff < min) {
                min = diff;
                ans.clear();
                ans.push_back({arr[i - 1], arr[i]});
            } else {
                if (diff == min) {
                    ans.push_back({arr[i - 1], arr[i]});
                }
            }
        }
        return ans;
    }
};