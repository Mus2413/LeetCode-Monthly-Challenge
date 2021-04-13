class Solution {
public:
    vector<int> constructArray(int n, int k) {
        vector<int>ans(n);
    int i=0;
    ans[0] = 1;
    
    //Part 1
    while(k){
        
        if(!(i%2)) ans[i+1] = ans[i]+k;
        else ans[i+1] = ans[i]-k;
        
        i++;
        k--;
        
    }
    
    //Part 2
    for(int j=i+1;j<n;j++){
        ans[j] = j+1;
    }       
    
    return ans;
    }
};