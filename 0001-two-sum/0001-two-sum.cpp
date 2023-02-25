class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>>v;
        int start=0,end=nums.size()-1;
        for(int i=0;i<nums.size();i++)
        {
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end());
        while(start<end)
        {
            int currsum=v[start].first+v[end].first;
            if(currsum==target)
            {
                return {v[start].second,v[end].second};
            }
            else if(currsum<target)
            {
                start++;
            }
            else
            {
                end--;
            }
        }
        return {-1, -1};
    }
};