class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> x;
        x['I'] = 1;        
        x['C'] = 100;
        x['M'] = 1000;
        x['D'] = 500;
        x['L'] = 50;
        x['X'] = 10;
        x['V'] = 5;
        int result = 0;
        int lastIdx = s.length() - 1;
        while(lastIdx >= 0){
            int sum = x[s[lastIdx]];
            char d = lastIdx - 1;
            while(d >= 0 && x[s[d]] < x[s[lastIdx]]){
                sum -= x[s[d]];
                d--;
            }
            result += sum;
            lastIdx = d;
        }
        return result;
    }
};
  