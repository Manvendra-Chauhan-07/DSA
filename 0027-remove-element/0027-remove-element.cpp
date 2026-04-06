class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        vector<int> arr;
        for(int i=0;i<n;i++){
            if(nums[i]!=val){
                arr.push_back(nums[i]);
            }
        }
        int k=arr.size();
        for(int i=0;i<k;i++){
            nums[i]=arr[i];
        }
        return k;
    }
};