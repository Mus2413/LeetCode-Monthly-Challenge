class Solution {
public:
    int ladderLength(string beginword, string endword, vector<string>& wordList) {
        if(beginword==endword)
            return 0;
        unordered_map<string,bool> mp;
        for(int i=0;i<wordList.size();i++)
            mp[wordList[i]]=false;
        queue<pair<string,int>>q;
        q.push({beginword,1});
        mp[beginword]=true;
        //cout<<"enter in queue"<<endl;
        while(!q.empty())
        {
            string s=q.front().first;
            int x=q.front().second;
            q.pop();
            //cout<<s<<" "<<x<<endl;
            if(s==endword)
                return x;
            for(int i=0;i<s.length();i++)
            {
                char a=s[i];
                for(char c='a' ;c<='z';c++)
                {
                    s[i]=c;
                    //cout<<s<<endl;
                    if(mp.find(s)!=mp.end() && mp[s]==false)
                    {
                        q.push({s,x+1});
                        mp[s]=true;
                    }
                }
                s[i]=a;
            }
        }
        return 0;
        
    }
};