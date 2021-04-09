class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
         vector<int> dict(26, 0);
        for (int i = 0; i < 26; ++i)
            dict[order[i] - 'a'] = i;
        
        for(int i = 0; i < words.size() - 1; i++)
            if(isBigger(words[i], words[i+1], dict))
                return false;
        return true;
    }
    
    bool isBigger(string w1, string w2, vector<int> dict) {
        int size = min(w1.size(), w2.size());
        for(int i = 0; i < size; i++) {
            if(dict[w1[i] - 'a'] > dict[w2[i] - 'a'])
                return true;
            if(dict[w1[i] - 'a'] < dict[w2[i] - 'a'])
                return false;
        }
        return w1.size() > w2.size();
    }
    
};