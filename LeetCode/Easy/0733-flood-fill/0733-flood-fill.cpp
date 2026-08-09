class Solution {
public:

    void fill(vector<vector<int>>& image, int color, int i, int j, int original_color)  
    {
        if (j < 0 || j >= image[0].size() || i < 0 || i >= image.size())
            return;
        if (image[i][j] != original_color)
            return;
        image[i][j] = color;

        fill(image, color, i + 1, j, original_color);
        fill(image, color, i - 1, j, original_color);
        fill(image, color, i, j + 1, original_color);
        fill(image, color, i, j - 1, original_color);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int i, int j, int color)
    {
        int original_color = image[i][j];
        if (original_color == color)
            return image;

        fill(image, color, i, j, original_color);
        return image;
    }
};