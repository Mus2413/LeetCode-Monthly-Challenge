class Solution {
public:
    int solve(string s,int i,int j)
    {
        int count=0;
        for(;i<j;i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i'|| s[i]=='u' )
                count++;
        }
        return count;
    }
    bool halvesAreAlike(string sl) {
          transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
        int n=sl.length();
        int left=solve(sl,0,n/2);
        int right=solve(sl,n/2,n);
        if(left==right)
            return true;
        else
            return false;
        
    }
};