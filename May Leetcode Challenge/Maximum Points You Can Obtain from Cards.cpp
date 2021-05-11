class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum=0,n=cardPoints.size();
        for(int i=0;i<n;i++)
            sum+=cardPoints[i];
        if(k==n)
            return sum;
        int ans=0;
        int i=0,j=0,x=0;
        while(i<n)
        {
            x+=cardPoints[i];
            if(i-j+1==n-k)
            {
                ans=max(ans,sum-x);
                x=x-cardPoints[j];
                j++;
            }
            i++;
        }
        return ans;
        
    }
};