class Solution {
public:
     bool visited[1001];
         void dfs(vector<vector<int> > &rooms,int curr,int &count){
        if(visited[curr])
            return ;
        ++count;
        visited[curr]=true;
        for(int i=0;i<rooms[curr].size();i++)
            dfs(rooms,rooms[curr][i],count);
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int count=0;
        memset(visited,101,false);
        dfs(rooms,0,count);
        return (count==rooms.size());
    }
   
};