class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        vector<pair<int,int>> difference;
        int ans=0;
        for(int i=0;i<costs.size();i++){
            ans+=costs[i][1];
            difference.push_back({costs[i][0]-costs[i][1],i});
            
        }
        sort(difference.begin(),difference.end());
        int n= costs.size();
        for(int i=0;i<n/2;i++){
            ans+=difference[i].first;
           
        }
        return ans;
    }
};
