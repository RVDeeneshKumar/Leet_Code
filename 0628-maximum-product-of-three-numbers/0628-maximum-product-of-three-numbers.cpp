class Solution {
public:
    int maximumProduct(vector<int>& nums) {
     int size=nums.size(), productP, productN, thirdN;
    sort(nums.begin(), nums.end(), greater<int>());
    productP = nums[0]*nums[1]*nums[2];
    if (nums[0] > nums[size-1-2]) {
        thirdN = nums[0];
    } else {
        thirdN = nums[size-1-2];
    }
    productN = nums[size-1]*nums[size-2]*thirdN;
    if (productP > productN) {
        return productP;
    } else {
        return productN;
    }
    }
};