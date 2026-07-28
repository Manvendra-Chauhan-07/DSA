class Solution {
public:
    int trap(vector<int>& height) {
        
        int n=height.size();

        int maxi1=INT_MIN;
        int idx=-1;

        for(int i=0;i<n;i++)
        {
            if(height[i]>maxi1)
            {
                maxi1=height[i];
                idx=i;
            }
        }

        vector<int> brr(n,0);

        int maxi2=height[0];

        for(int i=1;i<idx;i++)
        {
            maxi2=max(maxi2,height[i]);
            brr[i]=maxi2-height[i];
        }

        int maxi3=height[n-1];

        for(int i=n-2;i>idx;i--)
        {
            maxi3=max(maxi3,height[i]);
            brr[i]=maxi3-height[i];
        }

        int sum=0;

        for(int i=0;i<brr.size();i++)
        {
            sum+=brr[i];
        }

        return sum;
    }
};