class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    map<int, int>mp;
    vector<int> res;
    for(int i=0;i<nums.size();i++)
    {
        int y=target-nums[i];
        if(mp.find(y)!=mp.end())
        {
            res={mp[y],i};
            return res;
        }
        else
        {
            mp.insert({nums[i],i});
        }
    }
    return res;
    }
};