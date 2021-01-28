class Solution {
public:
    string getSmallestString(int n, int k) {
        string res(n, 'a');
        int tot = 3;
        int index = n-1;
        k -= n;
        
        while(k)
        {
            if(k > 25)
            {
                res[index] = 'z';
                --index;
                k -=25;
            }
            else
            {
                res[index] += k;
                k = 0;
            }
        }
        return res;
    }
};