class Solution {
public:
    void modifiedColor(vector<vector<int>>& image, int sr, int sc, int color, int col){
        if (sr < 0 || sc < 0 || sr >= image.size() || sc >= image[0].size()) {
            return;
        }
        
        if (image[sr][sc] == col) {
            image[sr][sc] = color;
            modifiedColor(image, sr-1, sc, color, col);
            modifiedColor(image, sr, sc-1, color, col);
            modifiedColor(image, sr+1, sc, color, col);
            modifiedColor(image, sr, sc+1, color, col);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int col = image[sr][sc];
        // Check the starting color of the target cell, if it is the same then we don't need to make any recursive calls.
        if (col != color)
            modifiedColor(image, sr, sc, color, col);
        return image;
    }
};