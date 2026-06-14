class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int rows=image.size();
        int columns=image[0].size();
        int start=0,end=columns-1;
        for(int i=0;i<rows;i++)
        {
            start=0,end=columns-1;
            while(start<end)
            {
                swap(image[i][start],image[i][end]);
                start++;
                end--;

            }
        }
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<columns;j++)
            {
                if(image[i][j]==0)
                {
                    image[i][j]=1;
                }
                else
                {
                    image[i][j]=0;
                }
            }
        }
        return image;
    }
};