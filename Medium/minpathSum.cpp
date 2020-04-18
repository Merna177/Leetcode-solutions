class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int sum=grid[0][0];
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(i==0 && j==0)
                    continue;
                else if(i==0)
                    grid[i][j]+=grid[i][j-1];
                else if(j==0)
                    grid[i][j]+=grid[i-1][j];
                else
                   grid[i][j]+=min(grid[i-1][j],grid[i][j-1]);
                
                sum=grid[i][j];
            }
        }
        return sum;
    }
};
