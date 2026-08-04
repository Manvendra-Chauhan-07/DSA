class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n=nums.size();

        int small=INT_MAX;
        int large=INT_MIN;

        for(int i=0;i<n;i++)
        {
            small=min(small,nums[i]);
            large=max(large,nums[i]);
        }

        unordered_map<int,int> mpp;
        
        for(int i=0;i<n;i++)
        {
            mpp[nums[i]]++;
        }

        vector<int> brr;

        for(int i=small;i<=large;i++)
        {
            if (mpp.find(i) == mpp.end())
            {
                brr.push_back(i);
            }
        }

        return brr;
    }
};