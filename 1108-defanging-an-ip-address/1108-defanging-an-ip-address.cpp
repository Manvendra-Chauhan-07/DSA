class Solution {
public:
    string defangIPaddr(string address) {
        
        string ans;
        
        for(auto ch : address)
        {
            if(ch == '.')
            {
                ans+= "[.]";
            }
            else
            {
                ans+=ch;
            }
        }
        return ans;
    }
};