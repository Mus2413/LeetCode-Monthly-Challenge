class Solution {
public:
    int findKthPositive(vector<int>& a, int k) {
        int n=a.size();
        if(a[0]==1 && a[n-1]==n)
            return n+k;
        int j=1,i=0;
        vector<int> v;
        while(v.size()!=k &&i<n)
        {
            if(j==a[i])
            {
                j++;
                i++;
            }
            else
            {
                v.push_back(j);
                j++;
            }
        }
        if(v.size()==k)
            return v[k-1];
        else
        {
            int x=k-v.size();
            return a[n-1]+x;
        }
        
    }
};