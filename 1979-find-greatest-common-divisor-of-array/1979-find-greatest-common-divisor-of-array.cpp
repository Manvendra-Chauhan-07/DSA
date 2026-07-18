class Solution {
public:

    int gcd(int maxi, int mini)
    {
        if(mini==0)
        {
            return maxi;
        }
        int ans = gcd(mini,maxi%mini);
        return ans;
    }
    int findGCD(vector<int>& nums) {
        
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(auto val : nums)
        {
            maxi=max(maxi, val);
            mini=min(mini, val);
        }

        return gcd(maxi,mini);
    }

};