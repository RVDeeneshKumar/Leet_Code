class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int element=nums[0];
        int ct=0;
        for(int i=0;i<nums.size();i++)
        {
            if(ct==0)
            {
                element=nums[i];
            }
            if(element!=nums[i])
            {
                ct--;
            }
            else
            {
                ct++;
            }
        }
        return element;
    }
    
};