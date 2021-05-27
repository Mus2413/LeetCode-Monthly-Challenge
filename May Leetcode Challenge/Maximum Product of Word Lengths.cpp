class Solution {
public:
    int maxProduct(vector<string>& wo) {
        int n=wo.size();
        int ans=0;
        int arr[n][26];
        memset(arr,0,sizeof(arr));
        
        for(int i=0;i<wo.size();i++)
        {
            for(int j=0;j<wo[i].size();j++)
            {
                arr[i][wo[i][j]-'a']++;
            }
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int flag=0;
                for(int x=0;x<26;x++)
                {
                    if(arr[i][x]>0&&arr[j][x]>0)
                    {
                        flag=1;break;
                    }
                }
                if(flag==0)
                {
                    int fu=wo[i].length()*wo[j].length();
                    ans=max(ans,fu);
                }
            }
        }
        return ans;
    
    }
};