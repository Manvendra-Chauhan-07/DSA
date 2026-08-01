class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());

        int start=0,end=start+1;

        int n=nums.size();

        while(end<n)
        {
            if(nums[start]==nums[end])
            {
                return true;
            }
            else
            {
                start++;
                end++;
            }
        }

        return false;
    }
};