class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int rows = m;
        int cols = n;

        vector<vector<int>> mat(rows, vector<int>(cols));
        int p=original.size();
        for(int i=0;i<p;i++)
        {
            if(original.size() != m * n)
            {
                return {};
            }
            else
            {
                int rowindex=i/n;
                int colindex=i%n;
                mat[rowindex][colindex]=original[i];
            }
        }
        return mat;
    }
};