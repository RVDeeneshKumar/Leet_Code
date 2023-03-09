class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    vector<int> v;
    set<int> st;
    for(int i=0;i<nums1.size();i++)
    {
        for(int j=0;j<nums2.size();j++)
        {
            if(nums1[i]==nums2[j])
            {
                st.insert(nums1[i]);
            }
        }
    }
    for(auto itr =st.begin();itr!=st.end();itr++)
    {
        v.push_back(*itr);
    }
    return v;
    }
};