class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        sort(products.begin(),products.end());
        int size1=searchWord.size();
        int size2=products.size();
        vector<vector<string>> ans;
        for(int i=0;i<size1;i++){
            string checkstr=searchWord.substr(0,i+1);
            vector<string> subans;
            for(int j=0;j<size2;j++){
                string prodstr = (products[j].size()>=i+1) ? products[j].substr(0,i+1) : "";
                if(prodstr==checkstr){
                    subans.push_back(products[j]);
                }
                if(subans.size()==3){
                    break;
                }
            }
            ans.push_back(subans);
        }
        return ans;
    }
};