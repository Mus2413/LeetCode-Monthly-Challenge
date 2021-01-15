class Solution {
public:
    int bit[100002];
    int sum(int i)
    {
        int ans=0;
        for(int j=i;j>0;j-=(j&-j))
            ans+=bit[j];
        return ans;
    }
    void update(int i)
    {
        for(int j=i;j<=100001;j+=(j&-j))
            bit[j]+=1;
    }
    int createSortedArray(vector<int>& instructions) {
        int cost=0;
        
        for(int i=0;i<instructions.size();i++)
        {
           cost+=min(sum(instructions[i]-1),i-sum(instructions[i]) );
            cost%=1000000007;
            update(instructions[i]);
        }
        return cost%(1000000007);
        
        
    }
};