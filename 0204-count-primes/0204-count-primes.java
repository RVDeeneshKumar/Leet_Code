class Solution {
    public int countPrimes(int n) {
        int ct=0;

        if(n==0)
        {
            return 0;
        }
        else
        {
            boolean[] isPrime=new boolean[n];
            for(int i=2;i<n;i++)
            {
                isPrime[i]=true;
            }

            for(int i=2;i*i<n;i++)
            {
                if(!isPrime[i])
                {
                    continue;
                }
            

                for(int j=i*i;j<n;j+=i)
                {
                    isPrime[j]=false;
                }
            }
           
            for(int i=2;i<n;i++)
            {
                if(isPrime[i])
                {
                    ct++;
                }
            }
        }
        return ct;
        
    }
}