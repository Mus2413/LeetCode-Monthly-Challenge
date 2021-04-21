class Solution {
public:
    int memo[200][200];
    int dp(int i,int level,vector<vector<int>>& triangle)
    {
        if(level>=triangle.size()||i>=triangle[level].size())
            return 0;
        else if(memo[level][i]!=-1)
            return memo[level][i];
        else return memo[level][i]=triangle[level][i]+min(dp(i,level+1,triangle),dp(i+1,level+1,triangle));
    }
    int minimumTotal(vector<vector<int>>& triangle) 
    {
        memset(memo,-1,sizeof(memo));
        return dp(0,0,triangle);
    }
   
};