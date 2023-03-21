class Solution {
public:
    int binaryExp(int a, int b){
        a = a%1337;
        int ans =1;
        while(b>0){
            if(b&1){
                ans =( ans*1LL*a)%1337;
            }
            a = (a*1LL*a)%1337;
            b >>=1;
        }
        return ans;
    }
    int superPow(int a, vector<int>& b) {
        int bmod = 0;
        for(int val:b){
            bmod = (bmod*10+val)%1140;
        }
        return binaryExp(a, bmod);
        
    }
};