class Solution {
public:
    int countVowelStrings(int n) {
        int a[5];
        a[0]=1;
        a[1]=1;
        a[2]=1;
        a[3]=1;
        a[4]=1;
        int i=2,j=1;
        while(i<=n)
        {
            
            int b[5];
            b[0]=a[0];
            b[1]=a[1]+b[0];
            b[2]=b[1]+a[2];
             b[3]=b[2]+a[3];
             b[4]=b[3]+a[4];
            swap(a,b);
            i++;
        }
        long long int sum=a[0]+a[1]+a[2]+a[3]+a[4];
        return sum;
        
    }
};