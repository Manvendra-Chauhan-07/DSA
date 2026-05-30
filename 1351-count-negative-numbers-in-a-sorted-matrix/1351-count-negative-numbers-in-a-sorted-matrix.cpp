class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int count=0;
        for(int i=0;i<(n*m);i++)
        {
            int rowindex=i/m;
            int colindex=i%m;
            if(grid[rowindex][colindex]<0)
            {
                count++;
            }
        }
        return count;
    }
};