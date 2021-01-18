class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if((2*nums[i])==k)
            {
                count+=mp[nums[i]]/2;
                mp[nums[i]]=0;
            }
            else
            {
                int x=mp[nums[i]];
                int y=mp[(k-nums[i])];
                count+=min(x,y);
                mp[nums[i]]=0;
                mp[(k-nums[i])]=0;
            }
        }
        return count;    
        
    }
};