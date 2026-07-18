class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        
        int maxi1=INT_MIN;
        int maxi2=INT_MIN;

        for(auto val : nums1)
        {
            maxi1=max(maxi1, val);
        }
        for(auto val : nums2)
        {
            maxi2=max(maxi2, val);
        }
        int ans=0;
        if(maxi1<maxi2)
        {
            ans=maxi2-maxi1;
        }
        else
        {
            ans=maxi2-maxi1;
        }

        return ans;
    }
};