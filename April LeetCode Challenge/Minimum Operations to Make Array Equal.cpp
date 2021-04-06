class Solution {
public:
    int minOperations(int n) {
        int count=(2+(n-1)*2)/2;
        int half=n/2;
        return half*count-(((2+(half-1)*2)*half)/2);
    }
};