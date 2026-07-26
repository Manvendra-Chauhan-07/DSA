class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
        stack<int> st;
        unordered_map<int, int> mpp;

        for(int i=0;i<n;i++)
        {
            if(st.empty())
            {
                st.push(i);
            }
            else
            {
                while(!st.empty() && nums2[i]>nums2[st.top()])
                {
                    mpp[nums2[st.top()]]=nums2[i];
                    st.pop();
                }
                st.push(i);
            }
        }
        vector<int> brr(nums1.size(),-1);
        for(int i=0;i<nums1.size();i++)
        {
            if(mpp.find(nums1[i])!=mpp.end())
            {
                brr[i]=mpp[nums1[i]];
            }
        }

        return brr;
    }
};