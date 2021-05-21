class Solution {
public:
    string permutationValue(string str) {
        unordered_map<char, int> hmap;
        string pVal = "";
        int index = 1;
        
        for(char ch : str) {
            if(hmap.find(ch) == hmap.end())
                hmap[ch] = index++;
            pVal += to_string(hmap[ch]);
        }
        return pVal;
    }   
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
         vector<string> result;
        string pVal = permutationValue(pattern);
        for(string word : words) {
            if(permutationValue(word) == pVal)
                result.push_back(word);
        }
        return result;
    }
};