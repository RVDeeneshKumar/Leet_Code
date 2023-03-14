class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int idx=-1;
        int n=nums.size();
        for(int i=n-1;i>0;i--)
        {
            if(nums[i-1]<nums[i])
            {
                idx=i;
                break;
            }
        }
        if(idx==-1)
        {
            reverse(nums.begin(),nums.end());
        }
        else
        {
            auto previous=idx;
            for(int i=idx+1;i<n;i++)
            {
                if(nums[idx-1]<nums[i])
                {
                    previous=i;
                }
            }
            swap(nums[idx-1], nums[previous]);
            reverse(nums.begin()+idx, nums.end());
        }
    }
};