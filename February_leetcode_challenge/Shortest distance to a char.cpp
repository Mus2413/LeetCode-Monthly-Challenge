class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>index;
        vector<int> ans;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==c)
                index.push_back(i);
        }
        for(int i=0;i<s.length();i++)
        {
            int mindis=INT_MAX;
            if(s[i]==c)
            {
                ans.push_back(0);
            }
            else{
                for(int j=0;j<index.size();j++)
                {
                mindis=min(mindis,abs(index[j]-i));
               }
               ans.push_back(mindis);
            }
            
        }
        return ans;
            
        
    }
};