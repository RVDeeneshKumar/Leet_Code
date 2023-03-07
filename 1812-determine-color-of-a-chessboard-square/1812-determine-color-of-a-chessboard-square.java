class Solution {
    public boolean squareIsWhite(String coordinates) {
        char a=coordinates.charAt(0);
        int j=(int)coordinates.charAt(1);
        int i=0;
        switch(a)
        {
            case 'a':{i=1;break;}
            case 'b':{i=2;break;}
            case 'c':{i=3;break;}
            case 'd':{i=4;break;}
            case 'e':{i=5;break;}
            case 'f':{i=6;break;}
            case 'g':{i=7;break;}
            case 'h':{i=8;break;}
        }
        if((i==j)||(i+j)%2==0)
        {
            return false;
        }
        else
        {
            return true;
        }
        
    }
}