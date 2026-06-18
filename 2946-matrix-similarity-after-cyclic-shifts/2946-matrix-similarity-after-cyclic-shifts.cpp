class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int m=mat.size();
        int n=mat[0].size();
        k=k%n;
        vector<vector<int>> matrix(m, vector<int>(n));
        for(int i=0;i<m;i++)
        {
            if(i%2==0)
            {
                for(int j=0;j<n;j++)
                {
                    int value=((i*n)+j);
                    int nr=value/n;
                    int nc=(((value+k)%n))%n;
                    matrix[nr][nc]=mat[i][j];
                }
            }
            else
            {
                for(int j=0;j<n;j++)
                {
                    int value=((i*n)+j);
                    int nr=value/n;
                    int nc=((value+k)%n);
                    matrix[nr][nc]=mat[i][j];
                }
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]!=mat[i][j])
                {
                    return false;
                }
            }
        }
        return true;
    }
};