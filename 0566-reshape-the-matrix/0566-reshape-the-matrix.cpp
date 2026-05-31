class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> mat1(r, vector<int>(c));
        int n=mat.size();
        int m=mat[0].size();
        if((r*c)!=(n*m))
        {
            return mat;
        }
        for(int i=0;i<(n*m);i++)
        {
            int newrow=i/c;
            int newcol=i%c;
            int oldrow=i/m;
            int oldcol=i%m;
            mat1[newrow][newcol]=mat[oldrow][oldcol];
        }
        return mat1;
    }
};