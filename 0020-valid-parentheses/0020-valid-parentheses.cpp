class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        stack<char> s1;
        for(int i=0;i<n;i++){
            if(s1.empty()){
                s1.push(s[i]);
            }
            else
            {
                if(s1.top()=='('&&s[i]==')'){
                    s1.pop();
                }
                else if(s1.top()=='{'&&s[i]=='}'){
                    s1.pop();
                }
                else if(s1.top()=='['&&s[i]==']'){
                    s1.pop();
                }
                else
                {
                    s1.push(s[i]);
                }
            }
        }
        return s1.empty();
    }
};