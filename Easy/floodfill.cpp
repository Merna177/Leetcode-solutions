class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
         if (image[sr][sc] != newColor)
            dfs(image, sr, sc, image[sr][sc], newColor);
        return image;
    }
    void dfs(vector<vector<int>>& image, int r, int c, int old, int newc) {
        if(r < 0 || c < 0 || r >= image.size() || c >= image[0].size() || image[r][c] != old)
            return;
         image[r][c] = newc;
         dfs(image, r, c - 1, old, newc);
         dfs(image, r, c + 1, old, newc);
         dfs(image, r - 1, c, old, newc);
         dfs(image, r + 1, c, old, newc);
    }
  
    
};
