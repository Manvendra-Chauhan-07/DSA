class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        int n=nums.size();
        vector<int> brr(n,-1);
        
        for(int i=0;i<(nums.size()*2)-1;i++)
        {
            for(int j=i+1;j<(nums.size()*2);j++)
            {
                if(nums[j%n]>nums[i%n])
                {
                    brr[i%n]=nums[j%n];
                    break;
                }
            }
        }
        return brr;
    }
};