class Solution {
public:
    bool isPerfectSquare(int n) {
        if(n==0)
        {
            return true;
        }
        for (long long int i = 1; i * i <= n; i++) 
        {
            if ((n % i == 0) && (n / i == i)) 
            {
                return true;
            }
        }
        return false;
    }
};