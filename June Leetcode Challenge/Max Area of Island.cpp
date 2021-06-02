class Solution {
public:
    int ans = 0;
    void bfs(vector<vector<int>>& grid, int i, int j){
        queue<pair<int, int>>Q;
        
        Q.push({i ,j});
        
        int curr = 0;
        
        while(Q.size()){
            
            auto p = Q.front();
            Q.pop();
            
            int x = p.first, y = p.second;
            
            if(x<0 or y<0 or x>=grid.size() or y>=grid[0].size() or grid[x][y]==0)
                continue;
            
            grid[x][y] = 0;
            curr++;
            
            Q.push({x+1, y});
            Q.push({x-1, y});
            Q.push({x, y+1});
            Q.push({x, y-1});
            
        }
        
        ans = max(ans, curr);
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int row = grid.size(), col = grid[0].size();
        
        for(int i=0; i<row; i++){
            
            for(int j=0; j<col; j++)
            {
                if(grid[i][j])
                {
                    bfs(grid, i, j);
                }
            }
        }
        return ans;
        
    }
};
    