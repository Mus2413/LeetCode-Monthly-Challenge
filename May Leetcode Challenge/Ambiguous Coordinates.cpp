class Solution {
public:
    vector<string> insertDecimal(string s){
        int n = s.length();
        
        vector<string> v;
        
        if(n == 0)
            return {};
        if(n == 1)
            return {s};
            
        if(s[0] == '0' && s[n-1] == '0')
            return {};
        if(s[0] == '0')
            return {"0."+s.substr(1)};
        if(s[n-1] == '0')
            return {s};
        v.emplace_back(s);
        for(int i = 1; i<n; i++){
            v.emplace_back(s.substr(0,i)+"."+s.substr(i));
        }
        return v;
        
    }
    vector<string> ambiguousCoordinates(string s) {
        int n = s.length();
        vector<string> ans;
        
        for(int i = 1; i<n-2; i++){
            string s1 = s.substr(1,i);
            string s2 = s.substr(i+1,n-i-2);
            
            //cout<<s1<<" "<<s2<<endl;
            
            vector<string> v1 = insertDecimal(s1);
            vector<string> v2 = insertDecimal(s2);
            
            for(string s1 : v1){
                for(string s2 :  v2){
                    ans.emplace_back("("+s1+", "+s2+")");
                }
            }
        }
        return ans;
    }
};