class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                swap(matrix[j][i],matrix[i][j]);
            }
        }
        int rows=0;
        int start=0,end=n-1;
        for(int i=0;i<n;i++)
        {
            start=0,end=n-1;
            while(start<=end)
            {
                swap(matrix[i][start],matrix[i][end]);
                start++;
                end--;
            }
        }
    }
};