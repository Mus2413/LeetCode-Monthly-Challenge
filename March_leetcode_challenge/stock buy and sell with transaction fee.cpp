class Solution {
public:
int f;
int dp[50001][2];
int helper(vector<int>& p, int i, bool canBuy)
{
if(i >= p.size())
return 0;
if(dp[i][canBuy] != -1)
return dp[i][canBuy];
int profit;
if(canBuy)
profit = max(helper(p, i + 1, canBuy), -p[i] + helper(p, i + 1, false));
else
profit = max((p[i] - f) + helper(p, i + 1, true), helper(p, i + 1, canBuy));
return dp[i][canBuy] = profit;
}
int maxProfit(vector<int>& prices, int fee)
{
f = fee;
memset(dp, -1, sizeof(dp));
return helper(prices, 0, true);
}
    
};