class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int sum1=0,sum2=0;
        for(int i=0;i<n;i++)
        {
            sum1+=mat[i][i];
            if(i!=n-i-1)
            {
                sum2+=mat[i][n-i-1];
            }
        }
        return{sum1+sum2};
        }
};