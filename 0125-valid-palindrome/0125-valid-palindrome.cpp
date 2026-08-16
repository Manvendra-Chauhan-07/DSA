class Solution {
public:
    bool isPalindrome(string s) {
        
        if(s==" ")
        {
            return true;
        }

        for(char &ch : s)
        {
            ch=tolower(ch);
        }

        string ans="";

        for(char ch : s)
        {
            if(isalnum(ch))
            {
                ans+=ch;
            }
        }

        int n=ans.size();

        int start=0,end=n-1;
        while(start<end)
        {
            if(ans[start]!=ans[end])
            {
                return false;
            }
            start++;
            end--;
        }

        return true;
    }
};