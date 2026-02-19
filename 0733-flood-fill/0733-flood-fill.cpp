class Solution {
public:
    void DFS(vector<vector<int>>& image, int i, int j, int newColor,
             int oldColor) {
        if ((i < 0) || j < 0 || i >= image.size() ||
            j >= image[0].size() || image[i][j] != oldColor ||
            image[i][j] == newColor)
            return;

        image[i][j] = newColor;

        DFS(image, i - 1, j, newColor, oldColor);
        DFS(image, i, j + 1, newColor, oldColor);
        DFS(image, i + 1, j, newColor, oldColor);
        DFS(image, i, j - 1, newColor, oldColor);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {
        DFS(image, sr, sc, color, image[sr][sc]);
        return image;
    }
};