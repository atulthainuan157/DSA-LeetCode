class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string str = "1234567890";
        vector<int> ans;
        for (int length = 2; length < 10; length++) {
            for (int start = 0; start < str.length() - length; start++) {
                int digit = stoi(str.substr(start, length));
                if (digit >= low && digit <= high) {
                    ans.push_back(digit);
                }
            }
        }
        return ans;
    }
};