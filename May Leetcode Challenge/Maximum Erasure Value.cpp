class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int i=0,j=0,count=0,n=nums.size(),sum=0,maxsum=0;
        unordered_map<int,int>mp;
        while(i<n)
        {
            mp[nums[i]]++;
            sum+=nums[i];
            if(mp[nums[i]]==1)
                count++;
            if(count==i-j+1)
            {
                maxsum=max(sum,maxsum);
            }
            else if(count<i-j+1)
            {
                while(count!=i-j+1)
                {
                    sum-=nums[j];
                    mp[nums[j]]--;
                    if(mp[nums[j]] == 0)
                        count--;
                    j++;
                    
                }
                maxsum=max(maxsum,sum);
            }
            i++;
        }
        return maxsum;
        
    }
};