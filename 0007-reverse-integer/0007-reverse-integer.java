class Solution {
    public int reverse(int x) {
        int tmp=x; long rev=0;
        if(x<0)
        {
            x*=-1;
        }
        while(x>0)
        {
            rev=rev*10+x%10;
            x/=10;
        }
        if(rev>Integer.MAX_VALUE)
        {
            return 0;
        }
            if(tmp<0)
            {
                
                return (int) (-1*rev);
            }
            else
            {
                return (int) (rev);
            }
        
    }
}