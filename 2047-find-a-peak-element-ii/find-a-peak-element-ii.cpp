class Solution {
public:

    int findMaxRow(vector<vector<int>>& mat, int col) {

        int maxRow = 0;

        for (int i = 1; i < mat.size(); i++) {

            if (mat[i][col] > mat[maxRow][col]) {
                maxRow = i;
            }
        }

        return maxRow;
    }

    vector<int> findPeakGrid(vector<vector<int>>& mat) {

        int m = mat.size();
        int n = mat[0].size();

        int low = 0;
        int high = n - 1;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            // Find the row having the maximum element in the middle column
            int maxRow = findMaxRow(mat, mid);

            int left = -1;
            int right = -1;

            // Left neighbour
            if (mid > 0) {
                left = mat[maxRow][mid - 1];
            }

            // Right neighbour
            if (mid < n - 1) {
                right = mat[maxRow][mid + 1];
            }

            // Peak found
            if (mat[maxRow][mid] > left &&
                mat[maxRow][mid] > right) {

                vector<int> ans;
                ans.push_back(maxRow);
                ans.push_back(mid);

                return ans;
            }

            // Search left half
            else if (left > mat[maxRow][mid]) {
                high = mid - 1;
            }

            // Search right half
            else {
                low = mid + 1;
            }
        }

        vector<int> ans;
        ans.push_back(-1);
        ans.push_back(-1);

        return ans;
    }
};