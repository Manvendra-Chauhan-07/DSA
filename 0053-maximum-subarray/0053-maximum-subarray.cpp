class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int maxi=INT_MIN,sum1=0;
        for(int i=0;i<n;i++)
        {
            sum1=sum1+nums[i];
            if(sum1>maxi)
            {
                maxi=sum1;
            }
            if(sum1<0)
            {
                sum1=0;
            }
        }
        return maxi;
    }
};