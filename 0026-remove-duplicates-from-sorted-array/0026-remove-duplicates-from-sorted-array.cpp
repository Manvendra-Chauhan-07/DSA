class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n=nums.size();
        int count=0;
        int start=0,neighbour=start+1;

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
                count++;
                // neighbour++;
            }
        }

        return count+1;

    }
};