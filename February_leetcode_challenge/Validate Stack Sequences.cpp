class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& poped) {
        stack<int>s;
        if(pushed.size()!=poped.size())
            return false;
        int j=0;
        for(int i=0;i<pushed.size();i++)
        {
            if(s.empty())
            {
                s.push(pushed[i]);
            }
            else
            {
                while(!s.empty() && s.top()==poped[j])
                {
                    s.pop();
                    j++;
                }
                s.push(pushed[i]);
            }
        }
         while(!s.empty() && s.top()==poped[j])
        {
             s.pop();
             j++;
        }
        if(s.empty())
            return true;
        else
            return false;
        
    }
};