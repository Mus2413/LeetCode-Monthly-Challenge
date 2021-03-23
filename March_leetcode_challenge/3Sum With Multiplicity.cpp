class Solution {
public:
    #define mod 1000000007
    int threeSumMulti(vector<int>& A, int target) {
         int dp[4][305];
       
        memset(dp, 0, sizeof(dp));
        dp[0][0] = 1;
        for (int i = 0; i < A.size(); i++) {
            for (int k = 3; k >= 1; k--) {
                for (int j = 300; j >= A[i]; j--) {
                    dp[k][j] = (dp[k][j] + dp[k - 1][j - A[i]]) % mod;
                }
            }
        }
        return dp[3][target];
        
    }
};