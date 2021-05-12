class NumMatrix {
public:
     vector<vector<int>> prefixSum;
    NumMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        prefixSum.resize(m+1, vector<int>(n+1, 0));
        for(int i=1; i<=m; i++)
        {
            int sum = 0;
            for(int j=1; j<=n; j++)
            {
                sum += matrix[i-1][j-1];
                prefixSum[i][j] = prefixSum[i-1][j] + sum ;        
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        return prefixSum[row2+1][col2+1] - prefixSum[row1][col2+1] - prefixSum[row2+1][col1] + prefixSum[row1][col1];
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */