class Solution {
public:
    vector<string> result;
    void traverse(const string & S, string acc, int i, char ul){
        acc += ul; // Add character to current word cache
        
        i++; // Point to next character
        
        if(i >= S.size()){
            // No more letters to add to cache so we can add this
            // word permutation to the list of permutations
            result.push_back(acc);
            return;
        }
        if(isdigit(S[i])){
            traverse(S, acc, i, S[i]);
        } else {
            traverse(S, acc, i, toupper(S[i]));
            traverse(S, acc, i, tolower(S[i]));
        }
        
    }
    vector<string> letterCasePermutation(string S) {
        int i = 0;
        string acc;
        if(toupper(S[i])==tolower(S[i])){
            traverse(S, acc, i, S[i]);
        } else {
            traverse(S, acc, i, toupper(S[i]));
            traverse(S, acc, i, tolower(S[i]));
        }
        return result;
    }
};