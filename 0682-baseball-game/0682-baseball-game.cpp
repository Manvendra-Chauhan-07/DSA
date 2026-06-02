class Solution {
public:
    int calPoints(vector<string>& operations) {
        int n=operations.size();
        stack<int> st;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(operations[i]=="C")
            {
                st.pop();
            }
            else if(operations[i]=="D")
            {
                int mul=st.top()*2;
                st.push(mul);
            }
            else if(operations[i]=="+")
            {
                int plus=0;   
                int top=st.top();
                st.pop();
                plus=top+st.top();
                st.push(top);
                st.push(plus);
            }
            else
            {
                st.push(stoi(operations[i]));
            }
        
        }
        while(!st.empty())
        {
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};