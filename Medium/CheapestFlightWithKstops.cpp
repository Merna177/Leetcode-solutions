class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K) {
        vector<vector<pair<int,int>>> adjList(n);
        for(int i=0;i<flights.size();i++)
           adjList[flights[i][0]].push_back(make_pair(flights[i][1],flights[i][2]));
        
        queue<pair<int,pair<int,int>>> q;
        q.push(make_pair(0,make_pair(src,0)));
        int result = INT_MAX;
        while(!q.empty()){
            int step = q.front().first;
            int city = q.front().second.first;
            int cost= q.front().second.second;
            q.pop();
            if(step>K+1)continue;
            if(city == dst) result = min(result,cost); 
            for(int i=0;i<adjList[city].size();i++){
                if(cost+adjList[city][i].second<result)
                    q.push(make_pair(step+1,make_pair(adjList[city][i].first,cost+adjList[city][i].second)));
            }
        }
        return result==INT_MAX ? -1: result;
        
    }
};
