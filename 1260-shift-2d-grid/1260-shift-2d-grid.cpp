class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int rows=grid.size();
        int columns=grid[0].size();
        vector<vector<int>> matrix(rows, vector<int>(columns, 0));
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<columns;j++)
            {
                int index=((((i*columns)+j)+k)%(rows*columns));
                int nrows=index/columns;
                int ncolumns=index%columns;
                matrix[nrows][ncolumns]=grid[i][j];
            }
        }
        return matrix;
    }
};