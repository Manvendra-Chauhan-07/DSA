class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size(),j=1;
        int neighbour=nums[0];
        vector<int> k;
        int i=0;
        while(j<n)
        {

            if(nums[i]==nums[j]){
                j++;
            }
            else{
                k.push_back(nums[i]);
                neighbour=nums[j];
                j++;
                i=j-1;
            }
        }
        k.push_back(nums[i]);
        int m=k.size();
        for(int i=0;i<m;i++){
            nums[i]=k[i];
        }
        return m;
    }
};