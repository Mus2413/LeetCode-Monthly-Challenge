class Solution {
public:
    int findMaxForm(vector<string>& S, int z, int n) {
        int dp[101][101] = {0};                    
      
    for (auto &str : S) {
      int n0 = 0, n1 = 0;
      
      for (auto &ch : str)
        if(ch == '0') n0++;
        else n1++;
      
      for (int i = z; i >= n0; i--)
        for (int j = n; j >= n1; j--)
          dp[i][j] = max(dp[i][j], dp[i - n0][j - n1] + 1);
    }
    
    return dp[z][n];
    }
};