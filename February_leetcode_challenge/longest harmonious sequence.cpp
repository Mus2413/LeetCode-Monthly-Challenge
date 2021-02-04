class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int maxans=0;
        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(nums[i]-1)!=mp.end())
            {
                maxans=max(maxans,mp[nums[i]]+mp[nums[i]-1]);
            }
            if(mp.find(nums[i]+1)!=mp.end())
            {
                maxans=max(maxans,mp[nums[i]]+mp[nums[i]+1]);
            }
        }
        return maxans;
        
    }
};