class Solution {
public:
    vector<vector<int>> edges;
    vector<int> color;
    bool possibleBipartition(int N, vector<vector<int>>& dislikes) {
    color.resize(N+1,-1);
    edges.resize(N+1);
      for(int i=0;i<dislikes.size();i++){
          edges[dislikes[i][0]].push_back(dislikes[i][1]);
          edges[dislikes[i][1]].push_back(dislikes[i][0]);
      }
      for(int i=1;i<=N;i++){
          if(color[i]==-1 && !dfs(i,0))
              return false;
      }
      return true;

      }
     bool dfs(int node,int c){
         if(color[node]!=-1)
             return color[node]==c;
         color[node]=c;
         c^=1;
         for(int i=0;i<edges[node].size();i++){
             if(!dfs(edges[node][i],c))
                 return false;
         }
         return true;
     }
};
