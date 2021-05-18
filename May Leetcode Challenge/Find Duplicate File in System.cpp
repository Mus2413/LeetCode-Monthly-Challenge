class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        std::unordered_map<string, vector<string>> mp;
        for (string& path : paths) {
            stringstream ss(path);
            string dir;
            ss >> dir;
            string filename;
            while (ss >> filename) {
                string content = filename.substr(filename.find('(') + 1);
                mp[content].push_back(dir + "/" + filename.substr(0, filename.find('(')));
            }
        }

      
        vector<vector<string>> res;
        
        for (auto& item : mp) {
            
            if (item.second.size() > 1) {
                res.push_back({ item.second.begin(), item.second.end() });
            }
        }

        return res;
    }
};