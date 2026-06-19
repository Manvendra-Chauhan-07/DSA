class Solution {
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        int rows=nums.size();
        int columns=nums[0].size();
        vector<int> brr;
        for(int i = 0; i < rows; i++)
        {
            brr.push_back(nums[i][i]);

            if(i != columns - 1 - i) 
            {
                brr.push_back(nums[i][columns - 1 - i]);
            }
        }
        int maxi = 0;
         for(int i = 0; i < brr.size(); i++)
        {
            int num = brr[i];

            if(num < 2) continue;

            bool prime = true;

            for(int j = 2; j * j <= num; j++)
            {
                if(num % j == 0)
                {
                    prime = false;
                    break;
                }
            }

            if(prime)
            {
                maxi = max(maxi, num);
            }
        }

        return maxi;
    }
};