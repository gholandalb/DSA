class Solution {
public:


    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int i = 0, f = (int)matrix.size() - 1;
        int row = -1;
        while (i <= f)
        {
            int mid = (f - i)/2 + i;
            if (matrix[mid][0] <= target)
            {
                row = mid;
                i = mid + 1;
            }
            else
                f = mid - 1;
        }
        if (row == -1)
            return false;
        i = 0; f = (int)matrix[row].size() - 1;
        int ans = -1;
        while (i <= f)
        {
            int mid = (f - i)/2 + i;
            if (matrix[row][mid] == target)
                return true;
            if (matrix[row][mid] < target)
                i = mid + 1;
            else
                f = mid - 1;
        }
        return false;

    }
};