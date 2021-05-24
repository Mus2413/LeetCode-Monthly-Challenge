class Solution {
public:
    string toLowerCase(string my_str) {
        transform(my_str.begin(), my_str.end(), my_str.begin(), ::tolower);
        return my_str;
         
    }
};