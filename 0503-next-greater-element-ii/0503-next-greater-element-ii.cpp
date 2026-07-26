class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        int size=(n*2)-1;
        stack<int> st;
        vector<int> ans(n,-1);

        for(int i=0;i<size;i++)
        {
            while(!st.empty() && nums[i%n]>nums[st.top()])
            {
                ans[st.top()]=nums[i%n];
                st.pop();
            }

            st.push(i%n);
        }

        return ans;
    }
};