class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        stack<int> st;
        vector<int> brr(n,-1);
        for(int i=0;i<2*n-1;i++)
        {
            if(st.empty())
            {
                st.push(i%n);
            }
            else
            {
                while(!st.empty()&&nums[st.top()]<nums[i%n])
                {
                    brr[st.top()]=nums[i%n];
                    st.pop();
                }
            }
            st.push(i%n);
        }
        return brr;
    }
};