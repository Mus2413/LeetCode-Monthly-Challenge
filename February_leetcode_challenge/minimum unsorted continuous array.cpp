class Solution {
public:
    int findUnsortedSubarray(vector<int>& a) {
        int k;
         int x,n=a.size();
        for( k=0;k<a.size()-1;k++)
        {
            if(a[k]>a[k+1])
            {
                break;
            }
        }
        if(k>=a.size()-1)
            return 0;
        else
        {
           
            for( x=n-1;x>0;x--)
            {
                if(a[x]<a[x-1])
                {
                    break;
                }
            }
            int maxele=a[k],minele=a[x];
            {
                for(int i=k+1;i<x;i++)
                {
                    if(a[i]>maxele)
                        maxele=a[i];
                    if(a[i]<minele)
                        minele=a[i];
                }
            }
            for(int i=0;i<k;i++)
            {
                if(a[i]>minele)
                {
                    k=i;
                    break;
                }
            }
            for(int i=n-1;i>0;i--)
            {
                if(a[i]<maxele)
                {
                    x=i;
                    break;
                }
            }
            
        }
        return x-k+1;
        
    }
};