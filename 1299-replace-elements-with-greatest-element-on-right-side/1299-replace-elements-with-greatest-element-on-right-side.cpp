class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
        int n=arr.size();
        vector<int> brr(n,-1);
        int maxi=INT_MIN;

        for(int i=n-1;i>=1;i--)
        {
            maxi=max(maxi,arr[i]);
            brr[i-1]=maxi;
        }

        return brr;

    }
};