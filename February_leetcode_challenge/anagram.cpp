class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;
        if(s.length()!=t.length())
            return false;
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
        }
        for(int i=0;i<t.length();i++)
        {
            mp[t[i]]--;
        }
        for(auto x: mp)
        {
            if(x.second>0)
                return false;
        }
        return true;
        
    }
};