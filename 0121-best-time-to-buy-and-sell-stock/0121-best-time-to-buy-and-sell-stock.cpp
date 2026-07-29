class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int mini=INT_MAX;
        int maxi=0;

        for(int i=0;i<prices.size();i++)
        {
            mini=min(prices[i],mini);
            maxi=max((prices[i]-mini),maxi);
        }

        return maxi;
    }
};