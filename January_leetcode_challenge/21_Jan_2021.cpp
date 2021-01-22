class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        if (nums.size()==k) return nums;
        
        stack<int> result;
        for(int i=0;i<nums.size();i++)
        {
            int left = nums.size()-i;
            while(result.size()>0
                 && result.size()+left>k
                 && result.top()>nums[i])
            {
                result.pop();
            }
            if (result.size()<k)
                result.push(nums[i]);
        }
        vector<int>ans;
        while(!result.empty())
        {
            ans.push_back(result.top());
            result.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};