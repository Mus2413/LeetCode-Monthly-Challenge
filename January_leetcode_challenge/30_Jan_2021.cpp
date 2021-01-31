class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
         multiset<int,greater<int>>s;
        for(auto i:nums){
            if(i%2!=0){
                i*=2;
               
            }
             s.insert(i);
        }
       int ans=(*s.begin())-(*s.rbegin());//max element
        while((*s.begin())%2==0){
            int val=*s.begin();
            s.erase(val);
            s.insert(val/2);
            ans=min(ans,(*s.begin())-(*s.rbegin()));
        }
        return ans;
    }
};