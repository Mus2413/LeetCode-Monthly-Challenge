class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i==0 && nums[0]==1)
                continue;
            if(nums[i]==0)
                count++;
            else
            {
                if(count>=k)
                {
                    count=0;
                }
                else
                {
                    return false;
                }
            }
        }
        return true;
        
    }
};