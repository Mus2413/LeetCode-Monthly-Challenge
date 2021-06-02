class Solution {
public:
    unordered_map<string, bool> dp;

bool isInterleave(string s1, string s2, string s3) {
    int x = s1.length();
    int y = s2.length();
    int z = s3.length();
    
	//some initial checks (not necessary though)
    if(z != (x + y)){
        return false;
    }
    
    unordered_map<char, int> mp1;
    unordered_map<char, int> mp2;
    
    for(int i=0; i<z; i++){
        mp1[s3[i]]++;
    }
    
    for(int i=0; i<x; i++){
        mp2[s1[i]]++;
    }
    
    for(int i=0; i<y; i++){
        mp2[s2[i]]++;
    }
    
    if(mp1 != mp2){
        return false;
    }
    
    return solve(s1, s2, s3, 0, 0, 0);
}

bool solve(string s1, string s2, string s3, int i, int j, int k){
    
    string state = to_string(i) + "|" + to_string(j) + "|" + to_string(k);
    
    if(dp.find(state) != dp.end()){
        return dp[state];
    }
    
    if(k == s3.length()){
        return dp[state] = (i == s1.length() && j == s2.length());
    }
    
    if(i == s1.length() && j == s2.length()){
        return dp[state] = false;
    }
    
    if(i == s1.length()){
        return dp[state] = s2.substr(j) == s3.substr(k);
    }
    
    if(j == s2.length()){
        return dp[state] = s1.substr(i) == s3.substr(k);
    }
    
    bool ans = false;
    
    if(s1[i] == s3[k] && s2[j] == s3[k]){
        ans = ans || solve(s1, s2, s3, i+1, j, k+1) || solve(s1, s2, s3, i , j+1, k+1);
    }
    else if(s1[i] == s3[k]){
        ans = ans || solve(s1, s2, s3, i+1, j, k+1);
    }
    else if(s2[j] == s3[k]){
        ans = ans || solve(s1, s2, s3, i, j+1, k+1);
    }
    else{
        return dp[state] = false;
    }
    
    return dp[state] = ans;
}
};