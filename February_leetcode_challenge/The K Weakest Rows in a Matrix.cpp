class Solution {
public:
     #define pr pair<int,int>
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> vec;
        int m=mat.size();
        int n=mat[0].size();
        priority_queue<pr,vector<pr>,less<pr>> pq;
        for(int i=0;i<m;i++){
            int count=0;
            for(int j=0;j<n;j++){
               if(mat[i][j]==1){
                   count++;
               } 
            }
            pq.push(make_pair(count,i));
            if(pq.size()>k) pq.pop();
        }
        
        
        while(!pq.empty()){
            pr temp=pq.top(); pq.pop();
            vec.insert(vec.begin()+0,temp.second);
        }
        return vec;
    }
};