class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int count=0,maxi=INT_MIN;
        int rowsindex=-1;
        for(int i=0;i<n;i++)
        {
            count=0;
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==1)
                {
                    count++;
                }
                if(count>maxi)
                {
                    maxi=count;
                    rowsindex=i;
                }
            }
        }
        return{rowsindex,maxi};
    }
};