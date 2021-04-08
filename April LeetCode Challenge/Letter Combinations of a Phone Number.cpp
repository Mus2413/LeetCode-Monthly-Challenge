class Solution {
public:
    vector<string> letterCombinations(string digits) {
vector<string>ans;
if(digits.empty())
return ans;
ans.push_back("");
vector<string>v={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
for(int i=0;i<digits.size();i++)
{ vector<string> t;
string s=v[digits[i]-'0'];
for(int j=0;j<s.size();j++)
{
for(auto x: ans)
{
t.push_back(x+s[j]);
}
}
ans=t;
}
return ans;
    }
};