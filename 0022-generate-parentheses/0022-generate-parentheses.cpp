class Solution {
public:
    vector<string> answer;

    void solution(string s, int open, int close, int n) {
        if (s.length() == 2 * n) {
            answer.push_back(s);
            return;
        }
        if (open < n) {
            solution(s + '(', open + 1, close, n);
        }
        if (close < open) {
            solution(s + ')', open, close + 1, n);
        }
    }

    vector<string> generateParenthesis(int n) {
        solution("", 0, 0, n);
        return answer;
    }
};