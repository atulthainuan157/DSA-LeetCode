class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_set<char> firstRow = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'};
        unordered_set<char> secondRow = {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'};
        unordered_set<char> thirdRow = {'z', 'x', 'c', 'v', 'b', 'n', 'm'};

        vector<string> ans;

        for (int i = 0; i < words.size(); i++) {
            char firstLetter = (char)tolower(words[i][0]);
            int row;
            string curr = "";
            
            if (firstRow.find(firstLetter) != firstRow.end()) {
                row = 0;
            } else if (secondRow.find(firstLetter) != secondRow.end()) {
                row = 1;
            } else {
                row = 2;
            }

            for (int j = 0; j < words[i].size(); j++) {
                char currLetter = (char)tolower(words[i][j]);
                if (row == 0) {
                    if (firstRow.find(currLetter) == firstRow.end()) {
                        break;
                    }
                }
                if (row == 1) {
                    if (secondRow.find(currLetter) == secondRow.end()) {
                        break;
                    }
                }
                if (row == 2) {
                    if (thirdRow.find(currLetter) == thirdRow.end()) {
                        break;
                    }
                }
                curr += words[i][j];
            }

            if (curr.length() == words[i].length()) {
                ans.push_back(curr);
            }
        }

        return ans;
    }
};