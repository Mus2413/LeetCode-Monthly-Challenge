class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        if(x>sum)
            return -1;
        sum=sum-x;
        int i=0,j=0,count=0,ans=-1,a=0;
        while(i<n)
        {
            a=a+nums[i];
            if(a==sum)
            {
                ans=max(ans,i-j+1);
            }
            else if(a>sum)
            {
                while(a>sum)
                {
                    a=a-nums[j];
                    j++;
                }
                if(a==sum)
                {
                     ans=max(ans,i-j+1);
                }
            }
            i++;
        }
       // cout<<ans<<endl;
        if(ans==-1)
            return ans;
        else
            return n-ans;
    }
};