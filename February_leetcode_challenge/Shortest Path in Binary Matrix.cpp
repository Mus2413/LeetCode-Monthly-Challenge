class Solution {
public:
    bool isboundary(int x,int y,int n,int m)
    {
        if(x>=0 && x<n && y>=0 && y<m)
            return true;
        return false;
    }
    struct path{
        int x,y;
    };
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        if(grid[0][0]==1)
            return -1;
        queue<pair<path,int>>q;
        q.push({{0,0},1});
        bool visited[n][m];
        memset(visited,false,sizeof(visited));
        visited[0][0]=true;
        int val=grid[0][0];
        int xdir[]={0,0,1,-1,1,1,-1,-1};
        int ydir[]={1,-1,0,0,1,-1,1,-1};
        while(!q.empty())
        {
            int x=q.front().first.x;
            int y=q.front().first.y;
            int cost=q.front().second;
            q.pop();
            if(x==n-1 && y==m-1)
            {
                return cost;
            }
            for(int i=0;i<8;i++)
            {
                int a=x+xdir[i];
                int b=y+ydir[i];
                if(isboundary(a,b,n,m) && visited[a][b]==false && grid[a][b]==val)
                {
                    visited[a][b]=true;
                    q.push({{a,b},cost+1});
                }
            }
        }
        return -1;
    }
};