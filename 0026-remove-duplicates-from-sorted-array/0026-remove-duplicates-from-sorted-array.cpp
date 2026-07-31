class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n=nums.size();
        int start=0;
        int neighbour=start+1;
        while(neighbour<n)
        {
            if(nums[start]==nums[neighbour])
            {
                neighbour++;
            }
            else
            {
                start++;
                nums[start]=nums[neighbour];
                // start=i+1;
                neighbour++;
            }
        }

        return start+1;
    }
};