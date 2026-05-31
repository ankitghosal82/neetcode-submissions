class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        // First binary search to find the correct row
        int top = 0, bottom = m - 1;
        while (top <= bottom) {
            int midRow = top + (bottom - top) / 2;
            if (target >= matrix[midRow][0] && target <= matrix[midRow][n - 1]) {
                // Binary search inside this row
                int left = 0, right = n - 1;
                while (left <= right) {
                    int midCol = left + (right - left) / 2;
                    if (matrix[midRow][midCol] == target)
                        return true;
                    else if (matrix[midRow][midCol] < target)
                        left = midCol + 1;
                    else
                        right = midCol - 1;
                }
                return false; // target not found in the row
            } else if (target < matrix[midRow][0]) {
                bottom = midRow - 1;
            } else {
                top = midRow + 1;
            }
        }

        return false; // target doesn't belong to any row
    }
};

