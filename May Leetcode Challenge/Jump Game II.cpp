class Solution {
public:
    int jump(vector<int>& a) {
        int n=a.size();
        if(n==1)
            return 0;
        int i=0;
        int count=0;
        while(i<n)
        {
            if(a[i]+i>=n-1)
            {
              count++;
              break;
            }
            int steps=a[i];
            if(steps==0)
                return -1;
            int maxreach=0;
            int j;
            while(steps>0)
            {
                int x=a[steps+i]+steps+i;
                 if( maxreach<x){
                 maxreach=x;
                 j=steps+i;   
             }
              steps--;
            }
            count++;
            i=j;
        }
        return count;
        
    }
};