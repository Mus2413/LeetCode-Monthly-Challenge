class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n==0)
        {
            return 0;
        }
        if(n==1)
        {
            return 1;
        }
        
        int a[n+5];
        a[0]=0;
        a[1]=1;
        int index=2;
        int i=1;
        int maxele=0;
        while(index<=n)
        {
            index=2*i;
            a[index]=a[i];
            if(index<=n){
            maxele=max(maxele,a[index]);
            }
             index=2*i+1;
            a[index]=a[i]+a[i+1];
           
            if(index<=n){
            maxele=max(maxele,a[index]);
            }
            //cout<<index<<endl;
            i++;
            
        }
        return maxele;
        
        
        
    }
};