class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
       int smallestNum = INT_MIN;
        bool flag = true;
        
        for(int i = 0; i < nums.size()-1; i++) {
            if(nums[i] > nums[i+1]) {
                if(flag) {
                    if(nums[i+1] >= smallestNum) {
                        nums[i] = nums[i+1];
                        smallestNum = nums[i];
                    }
                    else {
                        nums[i+1] = nums[i] + 1;
                        smallestNum = nums[i+1];
                    }
                    flag = false;
                }
                else return false;
            }
            else smallestNum = nums[i];
        }
        return true;
        
    }
};