class Solution {
public:
    int findLucky(vector<int>& arr) {
        int freq[501]={0};
        int ans=-1;
        for(int i=0;i<arr.size();i++)
        {
            freq[arr[i]]++;
        }
        for(int i=1;i<501;i++)
        {
            if(freq[i]==i)
            {
                ans=i;
            }
        }
        return ans;
    }
};