class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<pair<char,int>>Stack;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                Stack.push({'(',i});
            }
            else if(s[i]==')')
            {
                if(Stack.empty())
                {
                    s.erase(s.begin()+i);
                    i--;
                }
                else if(Stack.top().first=='(')
                {
                    Stack.pop();
                }
            }
        }
        if(Stack.empty())
        {
            return s;
        }
        else
        {
            while(!Stack.empty())
            {
                int x=Stack.top().second;
                s.erase(s.begin()+x);
                Stack.pop();
            }
            return s;
        }
        
    }
};