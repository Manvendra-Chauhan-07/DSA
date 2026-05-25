class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s1.empty()&&s[i]!='#'){
                s1.push(s[i]);
            }
            else{
                if(s[i]=='#'){
                    if(!s1.empty())
                    s1.pop();
                }
                else{
                    s1.push(s[i]);
                }
            }
        }
        stack<char> s2;
        int m=t.size();
        for(int i=0;i<m;i++){
            if(s2.empty()&&t[i]!='#'){
                s2.push(t[i]);
            }
            else{
                if(t[i]=='#'){
                    if(!s2.empty())
                    s2.pop();
                }
                else{
                    s2.push(t[i]);
                }
            }
        }
        while(!s1.empty() && !s2.empty()){

            if(s1.top() != s2.top()){
                return false;
        }

            s1.pop();
            s2.pop();
        }

        return s1.empty() && s2.empty();
    }
};