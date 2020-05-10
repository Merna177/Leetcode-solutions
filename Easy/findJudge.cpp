class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        vector<int>trusted(N+1,0);
        for(int i=0;i<trust.size();i++){
            trusted[trust[i][0]]--;
            trusted[trust[i][1]]++;
        }
        for(int i=1;i<=N;i++){
            if(trusted[i]==N-1)
                return i;
        }
        return -1;
    }
};
