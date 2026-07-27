class Solution {
public:
    bool isValid(string s) {
        
        int n=s.size();
        stack<char> st;
        
        for(int i=0;i<n;i++)
        {
            if(st.empty())
            {
                st.push(s[i]);
            }
            else
            {
                if((st.top()=='(' && s[i]==')') || (st.top()=='{' && s[i]=='}') || (st.top()=='[' && s[i]==']'))
                {
                    st.pop();
                }
                else
                {
                    st.push(s[i]);
                }
            }
        }
        
        return st.empty();
    }
};