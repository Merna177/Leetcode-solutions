class Solution {
public:
    int value=1;
  
    
    void setvalue(int i, int j, vector<vector<int>>& res, vector<vector<bool>>& visited) {
        res[i][j]=value++; 
        visited[i][j]=true;
    }
    
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n, vector<int>(n, 0));
        int i =0, j = 0;
        vector<vector<bool>> visited(n, vector<bool>(n, false));
        
        while (value<(n*n)) {
            while(j+1<n && !visited[i][j+1]){
                setvalue(i,j, res, visited);
                j++;
            }
            while(i+1<n && !visited[i+1][j]){
                setvalue(i,j, res, visited);
                i++;
            }
            while(j>0 && !visited[i][j-1]){
                setvalue(i,j, res, visited);
                j--;
                
            }
                 while(i>0 && !visited[i-1][j]){
                setvalue(i,j, res, visited);
                i--;
                
            }
            
        }
        
        res[i][j] = n*n;
        
        return res;
    }
};
