class Solution {
public:
    int maxArea(vector<int>& h) {
       int n=h.size();
        int i=0,j=n-1,maxans=0;
        while(i<j)
        {
            int x=min(h[i],h[j]);
            maxans=max(maxans,(j-i)*x);
            if(h[j]>h[i])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return maxans;
        
        
    }
};