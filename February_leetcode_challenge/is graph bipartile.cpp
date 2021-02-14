class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int> colors(n,0);
        for(int i=0;i<n;i++)
        {
           if(!colors[i])
           {
               queue<int> q;
               q.push(i);
               colors[i]=1;
               while(!q.empty())
               {
                   int curr=q.front();
                   q.pop();
                   for(int j=0;j<graph[curr].size();j++)
                   {
                       if(colors[graph[curr][j]]==0)
                       {
                           colors[graph[curr][j]]=-colors[curr];
                           q.push(graph[curr][j]);
                       }
                       else if(colors[graph[curr][j]]!=-colors[curr])
                           return false;
                   }
               }
           }
        }
        return true;
    }
};
