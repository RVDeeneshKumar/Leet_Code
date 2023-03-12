class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int head=0, tail=nums.size()-1, k=nums.size()-1;
        
        vector<int> res(nums.size());
        
        for(int i=0;i<nums.size();i++)
        {
            nums[i]=nums[i]*nums[i];
        }
        
        while(head<=tail)
        {
            if(nums[head]>nums[tail])
            {
                res[k]=nums[head];
                k--;
                head++;
            }
            else
            {
                res[k]=nums[tail];
                k--;
                tail--;
            }
        }
        return res;
        
    }
};