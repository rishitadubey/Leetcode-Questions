class Solution {
public:
    // A unique marker that won't conflict with real input numbers
    int MARKER = INT_MIN + 7; 

    void markRow(vector<vector<int>>& matrix, int i, int m) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] != 0 && matrix[i][j] != MARKER) {
                matrix[i][j] = MARKER;
            }
        }
    }

    void markCol(vector<vector<int>>& matrix, int j, int n) {
        for (int i = 0; i < n; i++) {
            if (matrix[i][j] != 0 && matrix[i][j] != MARKER) {
                matrix[i][j] = MARKER;
            }
        }
    }

    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 0) {
                    markRow(matrix, i, m);
                    markCol(matrix, j, n);
                }
            }
        }

        // Final Pass: Turn only our specific MARKERs back to 0
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == MARKER) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};