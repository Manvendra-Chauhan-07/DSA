class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int maxi=0,count=0;
        if(n==1&&nums[0]==0) return 0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            {
                count++;
                maxi=max(maxi,count);
            }
            else
            {
                count=0;
            }
        }
        return maxi;
    }
};