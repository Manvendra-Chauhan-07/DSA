class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int start=0,end=1;
        while(end<n)
        {
            if(nums[start]==0&&nums[end]!=0)
            {
                swap(nums[start],nums[end]);
                start++;
                end++;
            }
            else if(nums[start]==0)
            {
                end++;
            }
            else
            {
                start++;
                end++;
            }
            if(start==end) end++;
        }
    }
};