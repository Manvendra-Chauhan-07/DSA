class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        int start=0,end=n-1;
        int mid;
        while(start<=end)
        {
            mid=start+(end-start)/2;
            if(nums[mid]==target)
            {
                return true;
            }
            if(nums[start]==nums[mid]&&nums[mid]==nums[end])
            {
                start++;
                end--;
            }
            else if(nums[mid]>=nums[start])
            {
                if(nums[start]<=target&&nums[mid]>=target)
                {
                    end=mid-1;
                }
                else
                {
                    start=mid+1;
                }
            }
            else
            {
                if(nums[mid]<=target&&nums[end]>=target)
                {
                    start=mid+1;
                }
                else
                {
                    end=mid-1;
                }
            }
        }
        return false;
    }
};