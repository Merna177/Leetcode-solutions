class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int> > adjList(numCourses);
        vector<int> degrees(numCourses,0);
        for(int i=0;i<prerequisites.size();i++){
            degrees[prerequisites[i][0]]++;
            adjList[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        queue<int> q;
        for(int i=0;i<numCourses;i++){
            if(!degrees[i])
                q.push(i);
        }
        int coursesDone=0;
        while(!q.empty()){
            int cur = q.front();
            q.pop();
            coursesDone++;
            for(int i=0;i<adjList[cur].size();i++){
                if(--degrees[adjList[cur][i]]==0)
                    q.push(adjList[cur][i]);
            }
        }
        return coursesDone==numCourses;
    }
};
