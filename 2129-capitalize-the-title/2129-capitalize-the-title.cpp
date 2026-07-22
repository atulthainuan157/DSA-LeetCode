class Solution {
public:
    string capitalizeTitle(string title) {
        int space = 0;
        for (int i = title.length() - 1; i >= 0; i--) {
            if (title[i] == ' ') {
                space = 0;
                continue;
            } else {
                space++;
            }
            if (space > 2 && (i == 0 || title[i - 1] == ' ')) {
                title[i] = toupper(title[i]);
            } else {
                title[i] = tolower(title[i]);
            }
        }
        return title;
    }
};