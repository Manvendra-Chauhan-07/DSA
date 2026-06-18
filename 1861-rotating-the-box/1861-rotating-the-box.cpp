class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int rows= boxGrid.size();
        int columns=boxGrid[0].size();
        vector<vector<char>> matrix(columns, vector<char>(rows));
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<columns;j++)
            {
                matrix[j][i]=boxGrid[i][j];
            }
        }
        int rows1=matrix.size();
        int columns1=matrix[0].size();
        int start=0,end=columns1-1;
        for(int i=0;i<rows1;i++)
        {
            start=0,end=columns1-1;
            while(start<=end)
            {
                swap(matrix[i][start],matrix[i][end]);
                start++;
                end--;
            }
        }
        for(int col=0;col<columns1;col++)
        {
            int bottom=rows1-1;
            for(int r=rows1-1;r>=0;r--)
            {
                if(matrix[r][col]=='*')
                {
                    bottom=r-1;
                }
                else if(matrix[r][col]=='#')
                {
                    swap(matrix[r][col],matrix[bottom][col]);
                    bottom--;
                }
            }
        }
        return matrix;
    }
};