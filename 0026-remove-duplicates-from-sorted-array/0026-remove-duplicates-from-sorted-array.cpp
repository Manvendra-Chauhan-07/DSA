class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n=nums.size();
        int start=0;
        int neighbour=start+1;
        int count=0;

        while(neighbour<n)
        {
            if(nums[start]==nums[neighbour])
            {
                neighbour++;
            }
            else
            {
                start++;
                count++;
                nums[start]=nums[neighbour];
            }
        }

        return(count+1);
    }
};