class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n));
        if(n==1)
        {
            return {{1}};
        }
        int num=1;
        int top=0,left=0,right=n-1,bottom=n-1;
        while(top<=bottom&&left<=right)
        {
            for(int j=left;j<=right;j++)
            {
                matrix[top][j]=num;
                num++;
            }
            top++;
            for(int i=top;i<=bottom;i++)
            {
                matrix[i][right]=num;
                num++;
            }
            right--;
            if(top<=bottom)
            {
                for(int j=right;j>=left;j--)
                {
                    matrix[bottom][j]=num;
                    num++;
                }
                bottom--;
            }
            if(left<=right)
            {
                for(int i=bottom;i>=top;i--)
                {
                    matrix[i][left]=num;
                    num++;
                }
                left++;
            }
        }
        return matrix;
    }
};