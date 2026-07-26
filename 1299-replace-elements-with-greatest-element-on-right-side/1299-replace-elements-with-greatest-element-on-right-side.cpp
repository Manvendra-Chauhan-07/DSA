class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
        int maxi=INT_MIN;
        int n=arr.size();
        vector<int> brr(n,-1);

        for(int i=0;i<n-1;i++)
        {
            maxi=INT_MIN;
            for(int j=i+1;j<n;j++)
            {
                maxi=max(arr[j],maxi);
            }
            brr[i]=maxi;
        }

        return brr;
    }
};