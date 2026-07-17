class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        
        int sum1=0;
        int sum2=0;
        for(int i=1;i<=(n+n);i++)
        {
            if(i%2!=0)
            {
                sum1+=i;
            }
            else
            {
                sum2+=i;
            }
        }
        while(sum1%sum2!=0)
        {
            int rem=sum1%sum2;

            sum1=sum2;
            sum2=rem;
        }

        return sum2;
    }
};