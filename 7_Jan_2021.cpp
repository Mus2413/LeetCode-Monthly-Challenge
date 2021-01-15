class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        if(n==0 || n==1)
            return n;
        unordered_map<char,int> mp;
        int count=0,maxans=0,j=0;
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
            if(mp[s[i]]==1)
                count++;
            if(mp[s[i]]==2)
            {
                while(mp[s[i]]==2)
                {
                    mp[s[j]]--;
                    j++;
                    
                }
            }
            maxans=max(maxans,i-j+1);
        }
        return maxans;
        
    }
};