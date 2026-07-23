class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        unordered_set<int> ust;
        vector<int> result(n, 0);
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (ust.find(A[i]) != ust.end()) {
                count++;
            }
            if (ust.find(B[i]) != ust.end()) {
                count++;
            }
            if (A[i] == B[i]) {
                count++;
            }
            ust.insert(A[i]);
            ust.insert(B[i]);
            result[i] = count;
        }
        return result;
    }
};