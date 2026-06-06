class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int imposter=0;
        for(int i=1;i<n;i++)
        {
            if(nums[i-1]>nums[i])
            {
                imposter++;
            }
        }
        if(nums[0]<nums[n-1])
        {
            imposter++;
        }
        return imposter<=1;
    }
};