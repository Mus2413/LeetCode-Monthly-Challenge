class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int a,b,i;
        for( i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                a=i;
                break;
            }
        }
        //cout<<a<<endl;
        if(i<0)
        {
            reverse(nums.begin(),nums.end());
            return ;
        }
        for(int i=n-1;i>a;i--)
        {
            if(nums[i]>nums[a])
            {
                swap(nums[i],nums[a]);
                b=i;
                break;
            }
        }
        reverse(nums.begin()+i+1,nums.end());
        return ;
        
    }
};