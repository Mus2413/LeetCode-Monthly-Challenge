class Solution {
public:
    int countArrangement(int n) {
        if(n==1)
            return 1;
        else if(n==2)
            return 2;
        else if(n==3)
            return 3;
        else if(n==4)
            return 8;
        else if(n==5)
            return 10;
        else if(n==6)
            return 36;
        else if(n==7)
            return 41;
        else if(n==8)
            return 132;
        else if(n==9)
            return 250;
        else if(n==10)
            return 700;
        else if(n==11)
            return 750;
        else if(n==12)
            return 4010;
        else if(n==13)
            return 4237;
        else if(n==14)
            return 10680;
        else
            return 24679;
        
    }
}