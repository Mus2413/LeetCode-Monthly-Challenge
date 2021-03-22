class Solution {
public:
    void to_up(string &s){                   
    for(auto& i : s)
      if(i > 'Z') i -= 32;
  }
  
  void to_cons(string &s){                   
    for(auto& i : s)
      if(i == 'A' || i == 'E' || i == 'I' || i == 'O' || i == 'U') i = '_';
  }
  
  vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
    vector<string> ans;
    unordered_set<string> original;                      
    unordered_map<string,string> to_UP, to_CONS;         
    
    for(auto& w : wordlist){                                 
      original.insert(w);                              
      string tmp = w;
      
      to_up(tmp);                                       
      if(!to_UP.count(tmp)) to_UP[tmp] = w;             
      to_cons(tmp);                                      
      if(!to_CONS.count(tmp)) to_CONS[tmp] = w;         
    }
    
    for(auto& w : queries){                             
      if(original.count(w)) ans.push_back(w);           
      else{
        to_up(w);                                        
        if(to_UP.count(w)) ans.push_back(to_UP[w]);   
        else {
          to_cons(w);                                   
          if(to_CONS.count(w)) ans.push_back(to_CONS[w]);
          else ans.push_back("");                       
        }
      }
    }
      
    return ans;
  }
    
};