class Solution {
public:
    bool isBalanced(string num) {
        
        int evenSum=0;
        int oddSum=0;


        for(int i=0;i<num.size();i++)
        {
            int digit=num[i]-'0';

            if(i%2==0)
            {
                evenSum+=digit;
            }
            else
            {
                oddSum+=digit;
            }
        }

        return evenSum==oddSum;
    }
};