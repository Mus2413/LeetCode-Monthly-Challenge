class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int>s;
        for(int i=0;i<candyType.size();i++)
        {
            s.insert(candyType[i]);
        }
        int n=candyType.size()/2;
        if(n>s.size())
            return s.size();
        else
            return n;
        
    }
};