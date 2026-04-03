class Solution {
public:
    set<vector<int>>dupli;

    void getAllCombination(vector<int>& candidates, int idx, int target, vector<vector<int>>& ans, vector<int>& combination) {
        if (idx == candidates.size() || target < 0) {
            return;
        }
        if (target == 0) {
            if(dupli.find(combination)==dupli.end()) {
                ans.push_back(combination);
                dupli.insert(combination);
            }
            return;
        }
        combination.push_back(candidates[idx]);
        getAllCombination(candidates, idx + 1, target - candidates[idx], ans, combination);
        getAllCombination(candidates, idx, target - candidates[idx], ans, combination);
        combination.pop_back();
        getAllCombination(candidates, idx + 1, target, ans, combination);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> combination;
        vector<vector<int>> ans;
        getAllCombination(candidates, 0, target, ans, combination);
        return ans;
    }
};