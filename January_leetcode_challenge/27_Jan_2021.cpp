class Solution {
public:
    int concatenatedBinary(int n) {
        long ans=0;
    int mod=1e9+7,len=1;
    for(int i=1;i<=n;++i){
        ans=(ans<<len)%mod+i;
        if((i&(i+1))==0)
            len++;
    }
	return ans % mod;
    }
};