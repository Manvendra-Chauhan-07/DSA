class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int> brr(n+1);
        int j=0;
        brr[0]=0;
        for(int i=1;i<n+1;i++)
        {
            brr[i]=brr[i-1]+gain[j];
            j++;
        }
        int maxi=INT_MIN;
        for(int i=0;i<brr.size();i++)
        {
            maxi=max(brr[i],maxi);
        }
        return maxi;
    }
};