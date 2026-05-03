class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.size() != goal.size()) {
            return false;
        }
        string doubled = s + s;
        for (int i = 0; i < s.size(); i++) {
            if (doubled[i] == goal[0]) {
                int k = i;
                int j;
                for (j = 0; j < goal.size(); j++, k++) {
                    if (doubled[k] != goal[j]) {
                        break;
                    }
                }
                if (j == goal.size()) {
                    return true;
                }
            }
        }
        return false;
    }
};