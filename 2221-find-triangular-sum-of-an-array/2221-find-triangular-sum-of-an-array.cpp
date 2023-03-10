class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n-1; i++)
        {
            int val = nums[i];
            for(int j = i+1; j < n; j++)
            {
                int f = (nums[j]+val)%10;
                val = nums[j];
                nums[j] = f;
            }
        }
        return nums[n-1];
    }
};