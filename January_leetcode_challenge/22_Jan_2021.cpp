class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.length()!=word2.length())
            return false;
        int a[27]={},b[27]={};
        set<char>s1,s2;
        for(int i=0;i<word1.length();i++)
        {
            s1.insert(word1[i]);
            s2.insert(word2[i]);
            a[word1[i]-'a']++;
            b[word2[i]-'a']++;
        }
        if(s1!=s2)
           return false; 
        for(auto x:s1)
        {
            long long int t=a[x-'a'];
            //cout<<t<<endl;
            bool flag=false;
            for(auto y:s2 )
            {
                long long int z=b[y-'a'];
                //cout<<z<<endl;
                if(t==z)
                {
                    flag=true;
                    s2.erase(y);
                    break;
                }
               
            }
             if(flag==false)
                    return false;
        }
        
        
        return true;
    }
};